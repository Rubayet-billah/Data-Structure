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
    string s;
    int p;
    cin >> s >> p;
    int n = s.size();
    map<int, vector<int>> mp;
    vector<bool> shadow(n, false);

    for (int i = 0; i < n; i++)
    {
        int val = s[i] - 'a' + 1;
        mp[val].push_back(i);
    }

    int cnt = 0;
    for (auto [x, y] : mp)
    {
        for (int i : y)
        {
            cnt += x;
            if (cnt <= p)
            {
                shadow[i] = true;
            }
            else
            {
                break;
            }
        }
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (shadow[i])
            ans += s[i];
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