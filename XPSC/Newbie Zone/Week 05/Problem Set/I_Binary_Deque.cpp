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
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = 0, cnt = INT_MAX, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum == k)
            {
                int op = l - 0 + n - r - 1;
                cnt = min(cnt, op);
            }
            if (sum > k)
            {
                sum -= a[l];
                l++;
                if (sum == k)
                {
                    int op = l - 0 + n - r - 1;
                    cnt = min(cnt, op);
                }
            }
            r++;
        }
        if (cnt == INT_MAX)
            cout << "-1\n";
        else
            cout << cnt << "\n";
    }

    return 0;
}