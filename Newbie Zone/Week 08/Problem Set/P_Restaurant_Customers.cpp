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
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    int sz = mp.size();
    vector<ll> pref(sz + 1, 0);
    int i = 1;
    for (auto [x, y] : mp)
    {
        pref[i] = pref[i - 1] + y;
        i++;
    }
    ll mx = 0;
    for (int i = 0; i < sz + 1; i++)
    {
        mx = max(mx, pref[i]);
    }
    cout << mx << nl;
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