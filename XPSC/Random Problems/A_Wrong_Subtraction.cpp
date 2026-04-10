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
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }
    cout << n << nl;
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