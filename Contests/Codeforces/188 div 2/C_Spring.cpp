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

ll get_lcm(ll a, ll b)
{
    if (a == 0 || b == 0)
        return 0;
    ll g = __gcd(a, b);
    ll res = (ll)(a / g) * b;
    return res;
}

void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

    // lcm ber korbo sob gulo occurances er
    ll lab = get_lcm(a, b);
    ll lbc = get_lcm(b, c);
    ll lac = get_lcm(a, c);
    ll labc = get_lcm(lab, c);

    // lcm onujayi count corbo days
    ll cnt_a = m / a, cnt_b = m / b, cnt_c = m / c;
    ll cnt_ab = m / lab, cnt_bc = m / lbc, cnt_ac = m / lac;
    ll cnt_abc = m / labc;

    // 2 person occurances theke extra 3 person occurance bad dibo
    ll e_ab = cnt_ab - cnt_abc;
    ll e_bc = cnt_bc - cnt_abc;
    ll e_ac = cnt_ac - cnt_abc;

    // 1 person occurance theke previous extra 2 ar 3 person occurance bad dibo
    ll e_a = cnt_a - (e_ab + e_ac + cnt_abc);
    ll e_b = cnt_b - (e_ab + e_bc + cnt_abc);
    ll e_c = cnt_c - (e_ac + e_bc + cnt_abc);

    ll alice = e_a * 6 + e_ab * 3 + e_ac * 3 + cnt_abc * 2;
    ll bob = e_b * 6 + e_ab * 3 + e_bc * 3 + cnt_abc * 2;
    ll carol = e_c * 6 + e_ac * 3 + e_bc * 3 + cnt_abc * 2;

    cout << alice << " " << bob << " " << carol << nl;
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