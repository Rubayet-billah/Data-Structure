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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << nl;
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