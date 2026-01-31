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
    string s;
    cin >> n >> s;
    vector<char> a;
    a.push_back(s[0]);
    for (int i = 1; i < n; i++)
    {
        char x = s[i];
        if (s[i - 1] != x)
        {
            a.push_back(x);
        }
    }
    int ans = a.size();
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