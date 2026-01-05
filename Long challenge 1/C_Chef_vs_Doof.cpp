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

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1 && a[0] & 1)
    {
        haa return;
    }
    ll lcm = LCM(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        lcm = LCM(lcm, a[i]);
    }
    if (lcm & 1)
        haa else naa
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