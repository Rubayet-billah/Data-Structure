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

const int maxN = 1e5 + 9, inf = 2e9;
int n, k, stones[maxN], dp[maxN];

int f(int i)
{
    if (i == n)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int ans = inf;
    for (int jump = 1; jump <= k; jump++)
    {
        if (i + jump <= n)
            ans = min(ans, abs(stones[i] - stones[i + jump]) + f(i + jump));
    }

    return dp[i] = ans;
}

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> stones[i];
    }

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << f(1) << nl;
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