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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, ll> mp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            ll xorNum = (a[i] ^ a[j]);
            ll diff = abs(a[i] - a[j]);
            if (xorNum == diff)
            {
                if (!mp[i])
                    mp[i] = a[i];
                if (!mp[j])
                    mp[j] = a[j];
            }
        }

    cout << mp.size() << nl;
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