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
    int l, r;
    cin >> l >> r;
    vector<int> a;
    for (int i = l; i <= r; i++)
    {
        int d = i % 10;
        if (d == 2 || d == 3 || d == 9)
        {
            a.push_back(i);
        }
    }
    cout << a.size() << nl;
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