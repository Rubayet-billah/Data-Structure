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

int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    if (k == 1)
    {
        int gcd = __gcd(x, y);
        int mn = min(x, y);
        cout << mn + gcd << nl;
    }
    else
    {
        int gcd = __gcd(x, y);
        cout << gcd * 2 << nl;
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