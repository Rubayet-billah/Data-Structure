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

const int maxN = 4e4, N = 5e2, M = 4e4 + 9, MOD = 1e9 + 7;
ll dp[N][M];
vector<int> palindromes;

int f(int i, int sum)
{
    if (i >= palindromes.size())
    {
        return (sum == 0);
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    ll ans = 0;
    if (palindromes[i] <= sum)
    {
        ans += f(i, sum - palindromes[i]) % MOD;
    }
    ans += f(i + 1, sum) % MOD;

    return dp[i][sum] = ans % MOD;
}

void preCalPalindromes()
{
    for (int i = 1; i < maxN; i++)
    {
        string s = to_string(i), t = s;
        reverse(s.begin(), s.end());
        if (s == t)
        {
            palindromes.push_back(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << f(0, n) << nl;
}

int main()
{
    fast;
    preCalPalindromes();
    memset(dp, -1, sizeof(dp));
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}