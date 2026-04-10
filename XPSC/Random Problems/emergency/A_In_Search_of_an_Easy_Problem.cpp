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
    int n, val, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val == 1)
        {
            cnt++;
        }
    }
    if (cnt != 0)
    {
        cout << "HARD" << nl;
    }
    else
    {
        cout << "EASY" << nl;
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