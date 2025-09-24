#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
ll par_arr[100005];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dis[src] = 0;
    pq.push({0, src});
    while (!pq.empty())
    {
        pair<ll, ll> par = pq.top();
        pq.pop();
        ll parNode = par.second;
        ll parDis = par.first;

        if (parDis > dis[parNode])
            continue;
        for (auto child : adj_list[parNode])
        {
            ll childNode = child.first;
            ll childDis = child.second;
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
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        par_arr[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX)
    {
        cout << -1;
        return 0;
    }
    vector<ll> path;
    ll des = n;
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