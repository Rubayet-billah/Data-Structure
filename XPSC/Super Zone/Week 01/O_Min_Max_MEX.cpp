#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define ll long long
#define endl cout << "\n";
#define nl "\n"

const int N = 1 << 20;
int a[N];

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int l = 1, r = n / m, ans = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        int cnt = 0, distinct = 0;

        vector<bool> used(mid, false);

        for (int i = 1; i <= n; i++)
        {
            if (a[i] < mid)
            {
                if (!used[a[i]])
                {
                    used[a[i]] = true;
                    distinct++;
                }

                if (distinct == mid)
                {
                    cnt++;
                    fill(used.begin(), used.end(), false);
                    distinct = 0;
                }
            }
        }

        if (cnt >= m)
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
    fast int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
