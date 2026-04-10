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
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] == p[j] && !bad[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
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