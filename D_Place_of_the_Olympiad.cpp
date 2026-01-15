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
    ll n, m, k;
    cin >> n >> m >> k;
    ll st = (k + n - 1) / n;

    auto ok = [&](ll len)
    {
        ll cell = m;
        ll totalBench = (cell + 1) / (len + 1);
        ll remain = cell - (totalBench * (len + 1));
        ll stCnt = (totalBench * len);
        if (remain > 0)
            stCnt += remain;

        return stCnt >= st;
    };

    ll l = 1, r = m, ans, mid;
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
            l = mid + 1;
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