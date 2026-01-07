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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, d;
        cin >> a >> d;
        pair<int, int> x = {a, d};
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll time = 0, reward = 0;
    for (auto [x, y] : v)
    {
        time += x;
        reward += (y - time);
    }
    cout << reward << nl;
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