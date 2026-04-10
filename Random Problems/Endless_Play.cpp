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
    int d, h;
    cin >> d >> h;
    cout << (d - 4) * 24 + h << nl;
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