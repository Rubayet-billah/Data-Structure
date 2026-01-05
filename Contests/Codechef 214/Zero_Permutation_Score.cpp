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
    ll n;
    cin >> n;

    if (n < 3)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        ll k = (n - 2);
        ll ans = (k * k) / 4;
        if (n % 2 == 0)
            cout << ans << nl;
        else
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