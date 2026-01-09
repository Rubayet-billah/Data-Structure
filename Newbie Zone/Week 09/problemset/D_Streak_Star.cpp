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
    int n, x;
    cin >> n >> x;
    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxLen = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            maxLen++;
        else
            maxLen = 1;
        ans = max(ans, maxLen);
    }
    for (int j = 0; j < n; j++)
    {
        a[j] *= x;
        maxLen = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
                maxLen++;
            else
                maxLen = 1;
            ans = max(ans, maxLen);
        }
        a[j] /= x;
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