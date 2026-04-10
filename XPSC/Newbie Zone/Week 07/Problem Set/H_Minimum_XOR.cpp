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
    vector<int> a(n);
    int initialXor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        initialXor ^= a[i];
    }
    int minXor = initialXor;

    for (int i = 0; i < n; i++)
    {
        int tempXor = initialXor ^ a[i];
        minXor = min(minXor, tempXor);
    }
    cout << minXor << nl;
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