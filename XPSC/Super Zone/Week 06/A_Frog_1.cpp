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
int n, stones[maxN], dp[maxN];

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
    if (i + 1 <= n)
    {
        int case1 = abs(stones[i] - stones[i + 1]) + f(i + 1);
        ans = min(ans, case1);
    }
    if (i + 2 <= n)
    {
        int case2 = abs(stones[i] - stones[i + 2]) + f(i + 2);
        ans = min(ans, case2);
    }
    return dp[i] = ans;
}

void solve()
{
    cin >> n;
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