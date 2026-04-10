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

const int maxN = 100010;
vector<int> adj[maxN];
int cntNode[maxN];
int cuts = 0;

void dfs(int node, int par)
{
    cntNode[node] = 1;
    for (int child : adj[node])
    {
        if (child != par)
        {
            dfs(child, node);
            cntNode[node] += cntNode[child];
            if (cntNode[child] % 2 == 0)
            {
                cuts++;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n % 2 == 1)
    {
        cout << -1 << nl;
    }
    else
    {
        dfs(1, -1);
        cout << cuts << nl;
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