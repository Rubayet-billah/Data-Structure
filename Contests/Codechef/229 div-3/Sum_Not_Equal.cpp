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

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.rbegin(), a.rend());
    if (a[0].first == 0)
        cout << -1 << nl;
    else
    {
        for (int i = 0; i < 3; i++)
        {
            cout << a[i].second << " ";
        }
        endl
    }
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