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
    int b, r;
    cin >> b >> r;
    if (b > r)
    {
        cout << ((r) * 5) + (b - r) * 1 << nl;
    }
    else if (b < r)
    {
        cout << ((b) * 5) + (r - b) * 2 << nl;
    }
    else
    {
        cout << ((b) * 5) << nl;
    }
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