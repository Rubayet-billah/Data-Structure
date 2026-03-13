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
const int maxN = 3e5;
int n;
vector<ll> a(n + 1);

ll f(int i, ll length)
{
    if (i > n)
    {
        return length;
    }
    ll ans = 0;
    if (a[i] == n + 1 - i)
    {
        ans += f(i + 1, length + i - 1);
    }
    return ans;
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << f(1, n) << nl;
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