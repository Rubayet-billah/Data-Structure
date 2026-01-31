#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, char>> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
            a.push_back({x, 'R'});
        else
            a.push_back({x, 'B'});
    }
    sort(a.begin(), a.end());
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i].second == a[i - 1].second)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        haa else naa
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