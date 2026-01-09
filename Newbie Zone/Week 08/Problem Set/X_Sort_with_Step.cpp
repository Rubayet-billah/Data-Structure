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
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    int oddDis = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (abs(a[i] - i) % k)
            oddDis++;
    }
    if (oddDis == 0)
        cout << 0 << nl;
    else if (oddDis == 2)
        cout << 1 << nl;
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