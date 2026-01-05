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
    if (n == 1)
        cout << 1 << nl;
    else if (n & 1)
    {
        int ans = n / 2;
        cout << ans << nl;
    }
    else
    {
        int ans = (n + 2) / 2;
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