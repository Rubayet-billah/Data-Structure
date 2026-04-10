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
    vector<int> a(n), pref(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + a[i];

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        auto it = lower_bound(pref.begin(), pref.end(), q);
        int ans = it - pref.begin() + 1;
        cout << ans << nl;
    }
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