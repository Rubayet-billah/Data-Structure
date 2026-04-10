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

vector<ll> v[2000005];
ll cnt[2000005];

void dfs(ll node, ll parent)
{
    bool leafNode = v[node].size() == 1 && node != 1;
    if (leafNode)
        cnt[node] = 1;
    for (auto child : v[node])
    {
        if (child != parent)
        {
            dfs(child, node);
            cnt[node] += cnt[child];
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cnt[i] = 0;
        v[i].clear();
    }
    for (ll i = 1; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1, -1);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << cnt[x] * cnt[y] << nl;
    }
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