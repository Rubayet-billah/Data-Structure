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
    int r, b, g;
    cin >> r >> b >> g;
    int minColor = min(r, min(b, g));

    int totalGems = r + b + g;
    int bundlePrice = minColor * 10;
    int restPrice = (totalGems - (minColor * 3)) * 3;
    cout << bundlePrice + restPrice << nl;
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