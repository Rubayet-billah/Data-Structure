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

int ans;
vector<vector<int>> g;
string s;

int dfs(int u)
{
    int curr = s[u - 1] == 'W' ? 1 : -1;
    for (int v : g[u])
    {
        int newBalance = dfs(v);
        curr += newBalance;
    }
    if (curr == 0)
        ans++;
    return curr;
}

void solve()
{
    int n;
    cin >> n;
    g.assign(n + 1, vector<int>());
    ans = 0;

    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        g[p].push_back(i);
    }

    cin >> s;
    dfs(1);
    cout << ans << "\n";
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