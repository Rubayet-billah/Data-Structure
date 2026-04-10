#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<ll, greater<>> ms;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    int max_val = *ms.begin();
    vector<ll> v;
    ll gcd = 0;
    for (auto it : ms)
    {
        ll rst = max_val - it;
        v.push_back(rst);
        gcd = __gcd(rst, gcd);
    }
    ll ans = 0;
    for (auto i : v)
    {
        ll cnt = i / gcd;
        ans += cnt;
    }
    cout << ans << " " << gcd << "\n";

    return 0;
}