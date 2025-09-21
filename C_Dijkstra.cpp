#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100005];
int dis[100005];
int par_arr[100005];

void dijkstra(int src)
{
    priority_queue<pair<int, int>> pq;
    dis[src] = 0;
    pq.push({0, src});
    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();
        int parNode = par.second;
        int parDis = par.first;

        if (parDis > dis[parNode])
            continue;
        for (auto child : adj_list[parNode])
        {
            int childNode = child.first;
            int childDis = child.second;
            if ((parDis + childDis) < dis[childNode])
            {
                dis[childNode] = parDis + childDis;
                par_arr[childNode] = parNode;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (int i = 0; i < 100005; i++)
    {
        dis[i] = INT_MAX;
        par_arr[i] = -1;
    }
    dijkstra(1);

    if (dis[n] == INT_MAX)
    {
        cout << -1;
        return 0;
    }
    vector<int> path;
    int des = n;
    path.push_back(des);
    while (par_arr[des] != -1)
    {
        path.push_back(par_arr[des]);
        des = par_arr[des];
    }
    reverse(path.begin(), path.end());
    for (auto p : path)
    {
        cout << p << " ";
    }

    return 0;
}