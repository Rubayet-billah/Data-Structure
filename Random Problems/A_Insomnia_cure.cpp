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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damaged = 0;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damaged++;
        }
    }

    cout << damaged << nl;
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