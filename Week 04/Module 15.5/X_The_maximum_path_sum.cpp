#include <bits/stdc++.h>
using namespace std;
int grid[1005][1005];
int dp[1005][1005];

int n, m;

int knapsack(int si, int sj)
{
    if (si > n || sj > m)
    {
        return INT_MIN;
    }
    if (si == n && sj == m)
    {
        return grid[si][sj];
    }
    if (dp[si][sj] != INT_MIN)
        return dp[si][sj];
    int right = knapsack(si, sj + 1);
    int down = knapsack(si + 1, sj);

    dp[si][sj] = grid[si][sj] + max(right, down);
    return dp[si][sj];
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = INT_MIN;

    cout << knapsack(1, 1);
    return 0;
}