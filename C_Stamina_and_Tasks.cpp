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
    vector<pair<int, int>> tasks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i].first >> tasks[i].second;
    }

    double ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        double ci = tasks[i].first, pi = tasks[i].second;

        ans = max(ans, ci + (1.0 - pi / 100.0) * ans);
    }

    cout << fixed << setprecision(10) << ans << nl;
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