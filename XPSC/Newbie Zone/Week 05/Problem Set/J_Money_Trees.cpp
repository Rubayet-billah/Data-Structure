#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int l = 0, r = 0;
        ll sum = 0, maxLen = 0;

        while (r < n)
        {
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                sum = 0;
                l = r;
            }
            sum += a[r];

            while (sum > k && l <= r)
            {
                sum -= a[l];
                l++;
            }
            maxLen = max(maxLen, (ll)(r - l + 1));
            r++;
        }

        cout << maxLen << "\n";
    }

    return 0;
}
