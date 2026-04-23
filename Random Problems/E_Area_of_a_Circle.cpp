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

const double pi = 3.141592653;

void solve()
{
    double r;
    cin >> r;
    double ans = (pi * r * r);
    cout << fixed << setprecision(9) << ans << nl;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;s
    while (t--)
        solve();
    return 0;
}