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
    ll n, m;
    cin >> n >> m;
    if (n == 0 && m == 0)
    {
        cout << 0 << nl;
        return;
    }
    ll first = max(0LL, (n - m));
    ll last = n + m;
    if (first == last)
    {
        cout << first << nl;
        return;
    }
    ll xorVal = first ^ last;
    int diffMSB = 63 - __builtin_clzll(xorVal);
    ll mask = (1LL << (diffMSB + 1)) - 1;
    cout << (last | mask) << nl;
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