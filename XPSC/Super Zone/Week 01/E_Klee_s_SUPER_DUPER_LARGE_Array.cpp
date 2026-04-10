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

ll sum(ll f, ll s)
{
    if (f == s)
        return f;
    return ((f + s) * (s - f + 1)) / 2LL;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    auto good = [&](ll m)
    {
        if (sum(k, m) <= sum(m + 1, k + n - 1))
            return true;
        else
            return false;
    };
    auto good2 = [&](ll m)
    {
        if (sum(k, m - 1) >= sum(m, k + n - 1))
            return true;
        else
            return false;
    };

    ll l = k, r = k + n, mid;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }
    ll l2 = k, r2 = k + n, mid2;
    while (l2 + 1 < r2)
    {
        mid2 = l2 + (r2 - l2) / 2;
        if (good2(mid2))
            r2 = mid2;
        else
            l2 = mid2;
    }

    cout << min(sum(l + 1, n + k - 1) - sum(k, l), sum(k, r2 - 1) - sum(r2, n + k - 1)) << nl;
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