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
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a.push_back({r, l});
    }
    sort(a.begin(), a.end());
    int cnt = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].second << " " << a[i].first << nl;
    // }

    int lastWatch = a[0].first;
    for (int i = 1; i < n; i++)
    {
        if (lastWatch <= a[i].second)
        {
            cnt++;
            lastWatch = a[i].first;
        }
    }
    cout << cnt << nl;
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