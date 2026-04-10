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

const int nmax = 20;
const int mod = 1e9 + 7;
ll fact[nmax + 5];

ll bin_expo(int a, int b) // it will return a^b
{
    if (b == 0)
        return 1;
    ll x = bin_expo(a, b / 2);
    if (b & 1)
    {
        return (((x * x) % mod) * a) % mod;
    }
    else
    {
        return (x * x) % mod;
    }
}

ll mod_inv(int n)
{
    return bin_expo(n, mod - 2) % mod;
}

ll ncr(int n, int r)
{
    ll a = fact[n];
    ll b = (fact[r] * fact[n - r]) % mod;
    return (a * mod_inv(b)) % mod;
}
ll npr(int n, int r)
{
    ll a = fact[n];
    ll b = (fact[n - r]) % mod;
    return (a * mod_inv(b)) % mod;
}

void solve()
{
    cout << ncr(4, 2) << nl;
}

int main()
{
    fast;
    fact[0] = 1;
    for (ll i = 1; i <= nmax; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}