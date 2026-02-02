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
    vector<ll> a(n);
    map<int, bool> presence;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        presence[a[i]] = true;
    }

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    sort(a.begin(), a.end());
    ll gc = 0;
    for (int i = 0; i < n; i++)
    {
        gc = __gcd(gc, a[i] - a[0]);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (a.back() - a[i]) / gc;
    }

    for (ll i = a.back() - gc; 1; i -= gc)
    {
        if (!presence[i])
        {
            ans += (a.back() - i) / gc;
            break;
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