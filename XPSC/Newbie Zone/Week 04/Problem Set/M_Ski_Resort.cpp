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
        int n, k;
        ll c;
        cin >> n >> k >> c;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll variations = 0;
        int l = 0;

        while (l < n)
        {
            if (a[l] > c)
            {
                l++;
                continue;
            }
            int r = l;
            while (r < n && a[r] <= c)
            {
                r++;
            }
            int segmentLength = r - l;
            if (segmentLength >= k)
            {
                ll cnt = segmentLength - k + 1LL;
                variations += cnt * (cnt + 1) / 2;
            }
            l = r;
        }
        cout << variations << "\n";
    }
    return 0;
}