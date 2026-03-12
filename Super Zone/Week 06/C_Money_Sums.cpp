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
const int maxN = 1e2 + 9, maxM = 1e5 + 9;
int n, dp[maxN][maxM];
vector<int> a(maxN);

int f(int i, int sum)
{
    if (i > n)
    {
        return (sum == 0);
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int ans = 0;
    if (a[i] <= sum)
    {
        ans += f(i + 1, sum - a[i]);
    }
    ans += f(i + 1, sum);
    return dp[i][sum] = ans;
}

void solve()
{
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < maxN; i++)
        for (int j = 0; j < maxM; j++)
            dp[i][j] = -1;

    vector<int> ans;
    for (int targetSum = 1; targetSum <= sum; targetSum++)
    {
        if (f(1, targetSum))
        {
            ans.push_back(targetSum);
        }
    }
    cout << ans.size() << nl;
    for (int i : ans)
    {
        cout << i << " ";
    }
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