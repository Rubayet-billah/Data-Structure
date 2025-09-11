class Solution
{
public:
    vector<int> adj_list[100005];
    bool vis[100005];
    int parent[100005];
    bool cycle;
    void dfs(int src)
    {
        vis[src] = ture;
        for (int child : adj_list[src])
        {
            if (vis[child] && visPath[child])
            {
                cycle = false;
            }
            if (!vis[child])
            {
                parent[child] = true;
                dfs(child);
            }
        }
    }
    bool isCycle(int V, vector<vector<int>> &edges)
    {
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        cycle = false;
        dfs(0);
        return cycle;
    }
};