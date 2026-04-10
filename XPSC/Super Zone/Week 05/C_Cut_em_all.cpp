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
    vector<vector<int>> edge(n + 1);
    for (int i = 1; i < n; i++)

    {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> " << edge[i].size() << nl;
        // cout << i << " -> ";
        // for (auto p : edge[i])
        // {
        //     cout << p << " ";
        // }
        // endl
    }
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