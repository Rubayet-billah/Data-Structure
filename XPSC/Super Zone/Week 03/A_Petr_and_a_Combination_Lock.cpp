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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans(1 << n, 0);
    for (int i = 0; i < (1 << n); i++)
    {
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                ans[i] += a[k];
            }
            else
            {
                ans[i] -= a[k];
            }
        }
    }
    for (int i : ans)
    {
        if (i % 360 == 0)
        {
            haa return;
        }
    }
    naa
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