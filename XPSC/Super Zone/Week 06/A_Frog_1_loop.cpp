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
    int n;
    cin >> n;
    vector<int> stones(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> stones[i];
    }
    vector<int> dp(n + 1);
    dp[1] = 0;
    dp[2] = abs(stones[1] - stones[2]);

    for (int i = 3; i <= n; i++)
    {
        dp[i] = min((dp[i - 1] + abs(stones[i] - stones[i - 1])), (dp[i - 2] + abs(stones[i] - stones[i - 2])));
    }
    cout << dp[n] << nl;
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