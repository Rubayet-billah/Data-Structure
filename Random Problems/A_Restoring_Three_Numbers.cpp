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
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    for (int i = 1; i < 4; i++)
    {
        cout << a[0] - a[i] << " ";
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