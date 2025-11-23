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
            cin >> a[i];

        sort(a.begin(), a.end());

        ll minVal = a[0], gcd = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] % minVal == 0)
            {
                gcd = __gcd(a[i], gcd);
            }
        }
        if (minVal == gcd)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}