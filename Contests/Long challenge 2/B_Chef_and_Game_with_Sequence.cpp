#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
// #define endl cout << "\n";
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    // if (n == 1)
    // {
    //     cout << 1 << nl;
    //     return;
    // }
    int cntOdd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 1)
            cntOdd++;
    }
    if (n == 1 && cntOdd == 1)
    {
        cout << 1 << nl;
    }
    else if (cntOdd % 2 == 0)
    {
        cout << 1 << nl;
    }
    else
    {
        cout << 2 << nl;
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