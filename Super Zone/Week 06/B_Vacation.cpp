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
const int maxN = 1e5 + 9;
ll n, a[maxN], b[maxN], c[maxN], dp[maxN][3];

ll f(int i, int last)
{
    if (i > n)
    {
        return 0;
    }
    if (dp[i][last] != -1)
    {
        return dp[i][last];
    }
    ll ans = 0;
    for (int k = 0; k < 3; k++)
    {
        if (k == last)
        {
            continue;
        }
        if (k == 0)
        {
            ans = max(ans, a[i] + f(i + 1, k));
        }
        else if (k == 1)
        {
            ans = max(ans, b[i] + f(i + 1, k));
        }
        else
        {
            ans = max(ans, c[i] + f(i + 1, k));
        }
    }
    return dp[i][last] = ans;
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << f(1, 3) << nl;
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