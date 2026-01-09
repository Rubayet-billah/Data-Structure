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
    float a, b;
    cin >> a >> b;

    if (100 / a > 225 / b)
        cout << "Small" << nl;
    else if (100 / a < 225 / b)
        cout << "Large" << nl;
    else
        cout << "Equal" << nl;
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