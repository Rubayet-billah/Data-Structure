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
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    map<int, int> minCost;
    for (int i = 0; i < n; i++)
    {
        int vit = a[i];
        int cost = b[i];
        if (minCost.count(vit))
        {
            minCost[vit] = min(minCost[vit], cost);
        }
        else
        {
            minCost[vit] = cost;
        }
    }

    int ans = 0;
    for (auto [vit, cost] : minCost)
    {
        int profit = c - cost;
        if (profit > 0)
        {
            ans += profit;
        }
    }

    cout << ans << nl;
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