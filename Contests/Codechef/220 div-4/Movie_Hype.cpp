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
    vector<int> a(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }
    int minSound = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int currSound = max(a[i], a[i + 1]);
        minSound = min(minSound, currSound);
    }
    cout << minSound << nl;
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