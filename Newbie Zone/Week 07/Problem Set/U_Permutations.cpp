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
    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    if (n < 4)
    {
        cout << "NO SOLUTION" << nl;
        return;
    }
    vector<int> a;
    for (int i = 2; i <= n; i += 2)
    {
        a.push_back(i);
    }
    for (int i = 1; i <= n; i += 2)
    {
        a.push_back(i);
    }
    for (int x : a)
    {
        cout << x << " ";
    }
    endl
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