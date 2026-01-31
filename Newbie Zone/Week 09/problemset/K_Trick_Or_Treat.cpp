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
    int n, m;
    cin >> n >> m;
    map<int, int> candyFre;
    map<int, int> chocolateFre;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int idx = x % m;
        candyFre[idx]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int idx = x % m;
        chocolateFre[idx]++;
    }

    ll cnt = 0;
    if (candyFre[0] && chocolateFre[0])
        cnt = candyFre[0] * chocolateFre[0];
    for (auto [x, y] : candyFre)
    {
        if (chocolateFre[m - x])
            cnt += (chocolateFre[m - x] * 1LL * y);
    }
    cout << cnt << nl;
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