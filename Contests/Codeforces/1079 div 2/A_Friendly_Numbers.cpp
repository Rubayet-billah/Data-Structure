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

int getSum(ll n)
{
    if (n == 0)
        return 0;
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve()
{
    ll x;
    cin >> x;

    int cnt = 0;

    for (int s = 1; s <= 90; s++)
    {
        ll y = x + s;
        if (getSum(y) == s)
        {
            cnt++;
        }
    }

    cout << cnt << nl;
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