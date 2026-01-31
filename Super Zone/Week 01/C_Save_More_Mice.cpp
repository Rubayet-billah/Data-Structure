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
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    vector<ll> mouse(k), cat(k + 1);
    cat[0] = 0;
    for (int i = 0; i < k; i++)
    {
        cat[i + 1] = n - a[i] + cat[i];
    }
    int ans = 0;
    int l = 0, r = k - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] > cat[mid])
        {
            ans = mid + 1;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
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