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

bool kth_bit_on(ll n, int k)
{
    return ((n >> k) & 1);
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> a[i];
    ll fedor = a.back();
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ll x = a[i] ^ fedor;
        if (__builtin_popcount(x) <= k)
            ans++;
    }
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