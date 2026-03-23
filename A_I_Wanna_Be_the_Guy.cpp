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
    int n, p, q;
    cin >> n;
    vector<bool> a(n + 1, false);
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        int x;
        cin >> x;
        a[x] = true;
    }
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int x;
        cin >> x;
        a[x] = true;
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == false)
        {
            flag = false;
            break;
        }
    }
    string ans = flag ? "I become the guy." : "Oh, my keyboard!";
    cout << ans << nl;
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