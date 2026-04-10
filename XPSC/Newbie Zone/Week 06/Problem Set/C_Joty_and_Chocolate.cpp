#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n / a) * p, y = (n / b) * q;
    ll overlap = (n / LCM(a, b));
    ll ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

    cout << ans << "\n";
    return 0;
}