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
    for (int i = 0; i < (1 << n); i++)
    {
        for (int k = n - 1; k >= 0; k--)
        {
            if ((i >> k) & 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        endl
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