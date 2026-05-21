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
    int n, x;
    cin >> n;

    vector<int> a, b, c;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;

        if (x == 1)
            a.push_back(i);
        else if (x == 2)
            b.push_back(i);
        else
            c.push_back(i);
    }

    int w = min(a.size(), min(b.size(), c.size()));

    cout << w << nl;

    for (int i = 0; i < w; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << nl;
    }
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