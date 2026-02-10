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

bool kth_bit_on(ll n, int k)
{
    return ((n >> k) & 1);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int orr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        orr |= a[i];
    }
    vector<int> orrBits(20, 0);

    for (int i = 0; i <= __lg(orr); i++)
    {
        if (kth_bit_on(orr, i))
        {
            orrBits[i] = 1;
        }
    }

    auto ok = [&](int k)
    {
        if (k == 0)
            return false;
        vector<int> freq(20, 0);
        int currOr = 0;

        auto add = [&](int val)
        {
            for (int b = 0; b < 20; b++)
            {
                if ((val >> b) & 1)
                {
                    if (freq[b] == 0)
                        currOr |= (1 << b);
                    freq[b]++;
                }
            }
        };

        auto remove = [&](int val)
        {
            for (int b = 0; b < 20; b++)
            {
                if ((val >> b) & 1)
                {
                    freq[b]--;
                    if (freq[b] == 0)
                        currOr &= ~(1 << b);
                }
            }
        };

        for (int i = 0; i < k; i++)
            add(a[i]);

        int targetOr = currOr;
        for (int i = k; i < n; i++)
        {
            add(a[i]);
            remove(a[i - k]);

            if (currOr != targetOr)
                return false;
        }
        return true;
    };

    int l = 0, r = n - 1, mid, ans = n;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}