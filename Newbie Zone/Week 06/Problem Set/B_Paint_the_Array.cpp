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
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            gcd1 = __gcd(gcd1, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            gcd2 = __gcd(gcd2, a[i]);
        }

        ll ans = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % gcd1 == 0)
            {
                flag = false;
            }
        }

        if (flag)
        {
            ans = gcd1;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % gcd2 == 0)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                ans = gcd2;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}