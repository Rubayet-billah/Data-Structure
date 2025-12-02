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
    vector<int> a(n), b;
    int xorVal = 0;
    for (int i = 0; i < n; i++)
    {
        cin >>
            a[i];
        xorVal ^= a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = a[i] ^ xorVal;
        if (x)
            b.push_back(x);
    }
    int xorAns = 0;
    for (int i : b)
        xorAns ^= i;

    if (xorAns == 0)
        cout << xorVal << nl;
    else
        cout << -1 << nl;
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