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
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        maxNum = max(maxNum, x);
    }
    set<int> s;
    int maxFreq = 0;
    for (auto [x, y] : mp)
    {
        if (y == 1)
        {
            s.insert(x);
        }
        maxFreq = max(maxFreq, y);
    }

    if (s.size() == 1 && *s.begin() == maxNum && maxFreq == 2)
    {
        cout << maxFreq << nl;
    }
    else
    {

        int ans = (s.size() + 1) / 2;
        cout << ans << nl;
    }
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