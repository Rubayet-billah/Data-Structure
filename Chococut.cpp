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
    int n, m, k;
    cin >> n >> m >> k;
    int factor1 = (k + m - 1) / m, factor2 = (k + n - 1) / n;
    int minCost = min(m * factor1, n * factor2);
    int total = n * m;
    cout << total - minCost << nl;
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