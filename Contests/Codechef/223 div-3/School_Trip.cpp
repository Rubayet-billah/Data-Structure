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
    int n, x, k;
    cin >> n >> x >> k;
    int mid = (k) / 2;
    int mod = x % k;
    int add, remove;

    add = k - mod;
    remove = mod;
    int ans;
    if (add < remove && n - x >= add)
    {
        ans = add;
    }
    else
    {
        ans = remove;
    }
    cout << ans << nl;
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