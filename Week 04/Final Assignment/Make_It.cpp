#include <bits/stdc++.h>
using namespace std;
int dp[100005];

bool knapsack(int i, int n)
{
    if (i == n)
    {
        return true;
    }
    if (i > n)
    {
        return false;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    bool flag = false;
    if ((knapsack(i * 2, n)))
    {
        flag = true;
    }
    else if (knapsack(i + 3, n))
    {
        flag = true;
    }
    dp[i] = flag;
    return dp[i];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        cout << (knapsack(1, n) ? "YES" : "NO") << endl;
    }
    return 0;
}