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
    int block = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            block++;
    }
    if (block == n || s[0] == s[n - 1])
    {
        cout << block << nl;
    }
    else
    {
        cout << block + 1 << nl;
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