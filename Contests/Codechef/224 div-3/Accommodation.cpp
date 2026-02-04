#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl "\n"

void solve()
{
    ll b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;

    if (x + y > n)
    {
        cout << -1 << nl;
        return;
    }

    auto ok = [&](ll rooms)
    {
        if (b < rooms * x)
            return false;
        if (g < rooms * y)
            return false;
        return (rooms * n >= (b + g));
    };

    ll l = 1, r = b + g, ans = -1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            if (mid * n < (b + g))
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}