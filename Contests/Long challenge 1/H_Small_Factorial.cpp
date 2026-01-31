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
    vector<ll> fact(20 + 1, 1);
    for (int i = 1; i <= 20; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    int n;
    cin >> n;
    cout << fact[n] << nl;
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