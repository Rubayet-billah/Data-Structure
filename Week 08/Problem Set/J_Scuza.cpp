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
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), pref(n, 0), maxStep(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pref[0] = a[0];
    maxStep[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
        maxStep[i] = max(maxStep[i - 1], a[i]);
    }

    for (int i = 0; i < q; i++)
    {
        ll k;
        cin >> k;
        auto it = upper_bound(maxStep.begin(), maxStep.end(), k);
        ll cnt = it - maxStep.begin();
        if (cnt == 0)
            cout << 0 << " ";
        else
            cout << pref[cnt - 1] << " ";
    }
    endl
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