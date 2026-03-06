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

const int maxN = 1e5 + 10;
vector<int> adj[maxN];
int cats[maxN];
int n, m;
int ans = 0;

void dfs(int u, int p, int current_cats)
{
    if (cats[u])
        current_cats++;
    else
        current_cats = 0;

    if (current_cats > m)
        return;

    bool isLeaf = true;
    for (auto node : adj[u])
    {
        if (node != p)
        {
            isLeaf = false;
            dfs(node, u, current_cats);
        }
    }

    if (isLeaf)
        ans++;
}

void solve()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);

    cout << ans << nl;
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