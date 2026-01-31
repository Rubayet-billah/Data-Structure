#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }

    int r = 0, l = 0;
    ll sum = 0, cnt = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum >= s)
        {
            // cout << "sum-> " << sum << "\n";
            // cnt += (n - r);
            // cout << "cnt-> " << cnt << "\n";
            while (sum >= s && l <= r)
            {
                cnt += (n - r);
                sum -= a[l];
                l++;
            }
        }
        r++;
    }
    cout << cnt << "\n";

    return 0;
}