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
    int n, maxP;
    cin >> n >> maxP;
    ll area = -1;
    for (int i = 0; i < n; i++)
    {
        int a, b, p;
        cin >> a >> b >> p;
        if (p <= maxP)
        {
            area = max(area, 1LL * a * b);
        }
    }
    if (area == -1)
    {
        cout << "no tablet" << nl;
    }
    else
    {
        cout << area << nl;
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