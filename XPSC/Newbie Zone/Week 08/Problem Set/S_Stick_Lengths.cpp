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
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int mid = n / 2;
    int median1 = a[mid], median2 = a[mid + 1];

    ll ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans1 += abs(a[i] - median1);
        ans2 += abs(a[i] - median2);
    }
    cout << min(ans1, ans2) << nl;
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