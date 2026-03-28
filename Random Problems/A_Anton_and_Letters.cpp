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
    getline(cin, s);
    set<char> cnt;
    for (char c : s)
    {
        if (c != '{' && c != '}' && c != ',' && c != ' ')
        {
            cnt.insert(c);
        }
    }
    cout << cnt.size() << nl;
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