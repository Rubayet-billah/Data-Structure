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
    int k, n, w;
    cin >> k >> n >> w;
    int sum = ((w) * ((2 * k) + (w - 1) * k)) / 2;
    if (sum > n)
        cout << sum - n << nl;
    else
        cout << 0 << nl;
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