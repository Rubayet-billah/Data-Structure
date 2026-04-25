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

    vector<int> times(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        times[i] = times[i - 1] + (5 * i);
    }

    int remainingTime = 240 - k;
    int l = 0, r = n, mid;
    int ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (remainingTime >= times[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
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