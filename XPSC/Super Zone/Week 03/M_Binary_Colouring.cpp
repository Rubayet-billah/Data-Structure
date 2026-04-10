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
    cout << __lg(n) << nl;
    for (int k = 0; k <= __lg(n); k++)
    {
        if (n & (1 << k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    endl;
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