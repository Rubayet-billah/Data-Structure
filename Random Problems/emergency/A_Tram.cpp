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

    int cur = 0, mx = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        cur -= a;
        cur += b;

        mx = max(mx, cur);
    }

    cout << mx;
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