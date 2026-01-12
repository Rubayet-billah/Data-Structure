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
    if (n <= 2048)
        cout << __builtin_popcount(n) << nl;
    else
    {
        int multiplier = n / 2048;
        int remainder = n % 2048;
        int ans = __builtin_popcount(remainder) + multiplier;
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