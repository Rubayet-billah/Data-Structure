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
    ll n;
    cin >> n;

    map<ll, int> cnt;
    ll temp = n;
    for (ll i = 2; i * i <= temp; i++)
    {
        if (temp % i == 0)
        {
            while (temp % i == 0)
            {
                cnt[i]++;
                temp /= i;
            }
        }
    }
    if (temp > 1)
    {
        cnt[temp]++;
    }
    ll ans = 1;
    for (auto [x, y] : cnt)
    {
        ans *= x;
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