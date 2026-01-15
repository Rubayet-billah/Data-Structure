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
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    auto ok = [&](ll council)
    {
        ll need = council * k;
        ll have = 0;
        for (int i = 0; i < n; i++)
        {
            have += (min(council, 1LL * a[i]));
            if (have >= need)
                return true;
        }
        return false;
    };

    ll l = 1, r = 25e9, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
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