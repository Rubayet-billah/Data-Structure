#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int first = max(a[0], a[1]);
    int second = max(a[2], a[3]);
    sort(a.rbegin(), a.rend());
    if (a[0] == max(first, second) && a[1] == min(first, second))
        haa else naa
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