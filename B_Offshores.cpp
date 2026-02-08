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
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    ll total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += (a[i] / x) * y;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll curr = (total - (a[i] / x) * y) + a[i];
        if (curr > ans)
        {
            ans = curr;
        }
    }

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