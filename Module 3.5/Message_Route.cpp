#include <bits/stdc++.h>
using namespace std;

int n, e;
vector<vector<int>> adj_list; // adjacency list
vector<bool> vis;
vector<int> level, parent;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    cin >> n >> e;

    adj_list.assign(n + 1, {});
    vis.assign(n + 1, false);
    level.assign(n + 1, -1);
    parent.assign(n + 1, -1);

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bfs(1);

    if (!vis[n])
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    vector<int> path;
    int curr = n;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for (int i : path)
        cout << i << " ";

    return 0;
}
