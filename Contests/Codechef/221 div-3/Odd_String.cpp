#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    bool flag = true;
    for (auto [x, y] : mp)
    {
        if (y >= 3)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        haa else naa
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