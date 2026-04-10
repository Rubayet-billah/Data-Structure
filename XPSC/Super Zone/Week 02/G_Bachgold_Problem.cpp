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
    if (n == 2 || n == 3)
    {
        cout << 1 << nl << n << nl;
        return;
    }
    int k = (n - 2) / 2;
    cout << k + 1 << nl;
    for (int i = 0; i < k; i++)
    {
        cout << 2 << " ";
    }
    cout << ((n & 1) ? 3 : 2) << nl;
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