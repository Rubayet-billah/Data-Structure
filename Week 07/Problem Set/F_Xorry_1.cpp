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
    int x;
    cin >> x;
    int msb = __lg(x);
    if (x % (1 << msb) == 0)
    {
        cout << 0 << " " << x << nl;
        return;
    }
    int b = 1 << msb;
    int a = x ^ b;
    cout << a << " " << b << nl;
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