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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> maxFrogs(n + 1, 0);
    for (auto [x, y] : mp)
    {
        for (int i = x; i <= n; i += x)
        {
            maxFrogs[i] += y;
        }
    }
    int ans = 0;
    for (int i : maxFrogs)
    {
        ans = max(ans, i);
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