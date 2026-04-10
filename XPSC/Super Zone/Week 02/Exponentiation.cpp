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

const int MOD = 1e9 + 7;

int power(int x, int n)
{
    int ans = 1 % MOD;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * (ans % MOD) * (x % MOD)) % MOD;
        }
        x = 1LL * x * x % MOD;
        n >>= 1;
    }
    return ans;
}

void solve()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << nl;
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