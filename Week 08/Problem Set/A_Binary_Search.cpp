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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        int l = 0, r = n - 1, mid;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] == q)
            {
                found = true;
                break;
            }
            else if (a[mid] > q)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (found)
            haa else naa
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