#include <bits/stdc++.h>
using namespace std;
int vals[1005], weights[1005];
int dp[1005][1005];

int knapsack(int i, int max_weight)
{

    // base case
    if (i < 0 || max_weight <= 0)
    {
        return 0;
    }
    if (dp[i][max_weight] != -1)
    {
        return dp[i][max_weight];
    }

    // option 1, nibo naki nibo na
    if (max_weight - weights[i] >= 0)
    {
        int nile = knapsack(i - 1, max_weight - weights[i]) + vals[i];
        int naNile = knapsack(i - 1, max_weight);
        dp[i][max_weight] = max(nile, naNile);
        return dp[i][max_weight];
    } // option 2, nite parbo na
    else
    {
        dp[i][max_weight] = knapsack(i - 1, max_weight);
        return dp[i][max_weight];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max_weight;
        cin >> n >> max_weight;
        for (int i = 0; i < n; i++)
            cin >> weights[i];
        for (int i = 0; i < n; i++)
            cin >> vals[i];
        memset(dp, -1, sizeof(dp));

        cout << knapsack(n - 1, max_weight) << endl;
    }

    return 0;
}