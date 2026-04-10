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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> freq;
    for (auto [x, y] : mp)
        freq.push_back(y);
    sort(freq.begin(), freq.end());
    int cnt = 0;
    for (int i : freq)
    {
        if (k - i < 0)
        {
            break;
        }
        if (k >= i)
        {
            cnt++;
        }
        k -= i;
    }
    int ans = 1;
    if (mp.size() - cnt > 0)
    {
        ans = mp.size() - cnt;
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