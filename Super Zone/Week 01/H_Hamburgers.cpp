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
    string s;
    cin >> s;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll money;
    cin >> money;
    int rb = 0, rs = 0, rc = 0;
    for (auto c : s)
    {
        if (c == 'B')
            rb++;
        if (c == 'S')
            rs++;
        if (c == 'C')
            rc++;
    }

    auto ok = [&](ll burger)
    {
        ll needb = burger * rb, needs = burger * rs, needc = burger * rc;
        ll totalExtraCost = 0;
        if (needb > nb)
        {
            totalExtraCost += ((needb - nb) * pb);
        }
        if (needs > ns)
        {
            totalExtraCost += ((needs - ns) * ps);
        }
        if (needc > nc)
        {
            totalExtraCost += ((needc - nc) * pc);
        }
        return totalExtraCost <= money;
    };

    ll l = 0, r = 1e14, ans, mid;
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