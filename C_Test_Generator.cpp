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

ll getLowestBit(ll m)
{
    if (m == 0)
        return 0;
    ll power = 1;
    while ((m & 1) == 0)
    {
        power *= 2;
        m >>= 1;
    }
    return power;
}

void solve()
{
    ll s, m;
    cin >> s >> m;

    if (m == 0)
    {
        cout << -1 << nl;
        return;
    }

    ll minVal = getLowestBit(m);

    if (s % minVal != 0)
    {
        cout << -1 << nl;
    }
    else
    {
        ll ans = (s + m - 1) / m;
        cout << ans << nl;
    }
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