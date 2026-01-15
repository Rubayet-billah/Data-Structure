#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto ok = [&](ll dis)
    {
        int lastPos = a[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - lastPos >= dis)
            {
                lastPos = a[i];
                cnt++;
            }
        }
        return cnt >= k;
    };

    ll l = 1, r = 1e9, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        // cout << mid << nl;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}