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

    int a, b;
    cin >> a >> b;
    int c = max(a, b);
    int r = 6 - c + 1;
    int u = 6;
    int g = __gcd(r, u);
    cout << r / g << "/" << u / g << nl;
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