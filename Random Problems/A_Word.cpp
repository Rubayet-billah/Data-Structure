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
    cin >> s;
    int upperCnt = 0, lowerCnt = 0;
    for (char c : s)
    {
        if (c - 'a' < 0)
            upperCnt++;
        else
            lowerCnt++;
    }
    if (upperCnt > lowerCnt)
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    else
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);

    cout << s << nl;
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