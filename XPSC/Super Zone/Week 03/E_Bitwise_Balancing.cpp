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

ll turn_on_kth_bit(ll n, int k)
{
    return (n | (1LL << k));
}
ll turn_off_kth_bit(ll n, int k)
{
    return (n & (~(1LL << k)));
}

void solve()
{
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = b;
    int maxBit = max({__lg(b), __lg(c), __lg(d)});
    for (int k = 0; k <= maxBit; k++)
    {
        if (kth_bit_on(b, k) != kth_bit_on(d, k))
        {
            a = turn_on_kth_bit(a, k);
        }
        if (kth_bit_on(c, k) == kth_bit_on(d, k))
        {
            a = turn_off_kth_bit(a, k);
        }
    }
    if (((a | b) - (a & c)) == d)
    {
        cout << a << nl;
    }
    else
    {
        cout << -1 << nl;
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