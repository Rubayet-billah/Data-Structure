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
    int n, x, y;
    cin >> n >> x >> y;
    if (y % x != 0)
    {

        naa return;
    }
    int multiple = y / x;
    if (multiple <= n)
    {
        haa
    }
    else
    {
        naa
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