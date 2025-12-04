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
    int n, c;
    cin >> n >> c;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    string s;
    cin >> s;
    int totalCoins = 0;
    int freeCoins = 0;
    for (int i = 0; i < n; i++)
    {
        totalCoins += coins[i];
        if (s[i] == '0')
            freeCoins += coins[i];
    }
    int specialCoins = totalCoins - freeCoins;
    int ans = freeCoins;
    if (freeCoins >= c)
    {
        ans = max(ans, (freeCoins - c + specialCoins));
    }
    cout << ans << nl;
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