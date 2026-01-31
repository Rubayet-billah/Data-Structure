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

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    if (__gcd(x, y) > 1)
    {
        cout << 0 << nl;
        return;
    }
    if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
    {
        cout << 1 << nl;
        return;
    }
    cout << 2 << nl;
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