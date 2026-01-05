#include <bits/stdc++.h>
using namespace std;

// quick words
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define nl cout << "\n";
#define endl "\n"

// fast IO
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    nl
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