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
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int luckyDigits = mp['4'] + mp['7'];
    if (luckyDigits == 4 || luckyDigits == 7)
        haa else naa
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