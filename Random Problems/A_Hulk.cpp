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
    string ans = "I hate ";
    string p1 = "that I love ", p2 = "that I hate ";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
            ans += p1;
        else
            ans += p2;
    }
    ans += "it";
    cout << ans << nl;
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