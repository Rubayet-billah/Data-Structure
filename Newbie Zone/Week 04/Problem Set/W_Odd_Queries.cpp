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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        ll total_sum = pref[n];

        for (int i = 0; i < q; i++)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll width = r - l + 1;
            ll old_sum = pref[r] - pref[l - 1];
            ll new_sum = width * k;
            ll change = new_sum - old_sum;

            ll new_total = total_sum + change;

            if (new_total % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}