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
    int n;
    cin >> n;
    int minCost = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int imdb, cost;
        cin >> imdb >> cost;
        if (imdb >= 7)
        {
            minCost = min(minCost, cost);
        }
    }
    if (minCost == INT_MAX)
        cout << -1 << nl;
    else
        cout << minCost << nl;
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