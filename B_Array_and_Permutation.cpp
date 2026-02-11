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
    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        pos[p[i]] = i;
    }

    bool ok = true;

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (pos[a[i]] < j)
        {
            ok = false;
            break;
        }
        j = pos[a[i]];
    }

    if (ok)
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