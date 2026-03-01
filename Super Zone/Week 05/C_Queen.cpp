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
    int n, root;
    cin >> n;
    vector<int> g[n + 1], bad(n + 1, 0), badChilds(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int p, b;
        cin >> p >> b;
        int u = p, v = i;
        if (u != -1)
        {
            g[u].push_back(v);
        }
        else
        {
            root = i;
        }
        if (b == 1)
        {
            badChilds[u]++;
            bad[v] = 1;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i == root)
            continue;
        if (g[i].size() == badChilds[i] && bad[i] == 1)
        {
            ans.push_back(i);
        }
    }
    if (ans.size())
        for (int i : ans)
        {
            cout << i << " ";
        }
    else
        cout << -1 << " ";
    endl
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