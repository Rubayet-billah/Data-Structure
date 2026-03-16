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
    ll n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (k == n)
    {
        cout << m / a[p] << nl;
        return;
    }

    ll total_plays = 0;
    ll min_filler = 2e18;

    // Step 1: Handle the first play manually to put win-condition at the end
    if (p <= k)
    {
        if (m >= a[p])
        {
            total_plays++;
            m -= a[p];
        }
        else
        {
            cout << 0 << nl;
            return;
        }
    }
    else
    {
        // Find min in current first k to push win-condition forward
        ll initial_k_min = 2e18;
        for (int i = 1; i <= k; i++)
            initial_k_min = min(initial_k_min, a[i]);

        ll cost_to_reach = (p - k) * initial_k_min + a[p];
        if (m >= cost_to_reach)
        {
            total_plays++;
            m -= cost_to_reach;
        }
        else
        {
            cout << 0 << nl;
            return;
        }
    }

    // Step 2: Now the win-condition is effectively at the last position (n)
    // We need to find the cheapest "filler" card that isn't the win-condition
    // to bring it from n back to k for every subsequent play.
    for (int i = 1; i <= n; i++)
    {
        if (i == p)
            continue;
        min_filler = min(min_filler, a[i]);
    }

    // Cost to bring from n to k: (n-k) shifts using min_filler, then play a[p]
    ll cycle_cost = (n - k) * min_filler + a[p];

    if (cycle_cost > 0)
    {
        total_plays += (m / cycle_cost);
    }

    cout << total_plays << nl;
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