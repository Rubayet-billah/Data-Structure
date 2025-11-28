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

const ll MOD = 1000000007;

ll modpow(ll base, ll exp)
{
    ll ans = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    cout << modpow(2, n - 1) << nl;
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