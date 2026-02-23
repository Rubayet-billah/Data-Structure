#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    ll x, y;
    cin >> x >> y;

    ll check = x - 2 * y;

    if (check < 0 || check % 3 != 0)
    {
        naa return;
    }

    ll maxC = check / 6;

    if (y + maxC >= 0)
        haa else naa
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