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
    int n;
    ll h, k;
    cin >> n >> h >> k;
    vector<int> a(n);
    ll totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        totalSum += a[i];
    }

    vector<ll> prefSum(n + 1, 0);
    vector<int> minDmg(n);
    for (int i = 0; i < n; i++)
    {
        prefSum[i + 1] = prefSum[i] + a[i];
        minDmg[i] = (i == 0) ? a[i] : min(minDmg[i - 1], a[i]);
    }

    vector<int> maxDmg(n);
    maxDmg[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        maxDmg[i] = max(maxDmg[i + 1], a[i]);
    }

    auto ok = [&](ll time)
    {
        ll cycles = time / (n + k);

        if (cycles > 0 && totalSum >= (h + cycles - 1) / cycles)
            return true;

        ll rem = time % (n + k);
        ll seconds = min(1LL * n, rem);

        ll currentDamage = cycles * totalSum;
        ll extra = prefSum[seconds];

        if (seconds > 0 && seconds < n)
        {
            int sm = minDmg[seconds - 1];
            int lg = maxDmg[seconds];
            if (lg > sm)
            {
                extra += 1LL * (lg - sm);
            }
        }
        return (currentDamage + extra >= h);
    };

    ll l = 1, r = 2e18;
    ll ans = r;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
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