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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    bool possible = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[1] != a[i])
        {
            possible = true;
        }
    }
    if (!possible)
    {
        naa return;
    }
    haa;
    int district = -1;

    for (int i = 2; i <= n; i++)
    {
        if (a[1] != a[i])
        {
            cout << 1 << " " << i << nl;
            district = i;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[1] == a[i])
        {
            cout << district << " " << i << nl;
        }
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