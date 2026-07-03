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
    int x, k;
    cin >> x >> k;
    if (x % k != 0)
    {
        cout << 1 << nl << x << nl;
    }
    else
    {
        cout << 2 << nl;
        cout << k + 1 << " " << x - k - 1 << nl;
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