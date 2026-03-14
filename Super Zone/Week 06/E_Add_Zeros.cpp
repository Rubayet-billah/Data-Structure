#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl "\n"

// Use a map to store: map<Required_Length, list_of_possible_jumps>
map<ll, vector<ll>> adj;
map<ll, ll> dp;

ll dfs(ll curr)
{
    // If we've already calculated the max length reachable from here, return it
    if (dp.count(curr))
        return dp[curr];

    ll best = curr;

    // Check if there are any indices 'i' that can be triggered at this length
    if (adj.count(curr))
    {
        for (ll jump : adj[curr])
        {
            // New length = curr + (i - 1)
            best = max(best, dfs(curr + jump));
        }
    }

    return dp[curr] = best;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    adj.clear();
    dp.clear();

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i > 1)
        {
            // Condition: a[i] == current_len + 1 - i
            // Rearranged: current_len = a[i] + i - 1
            ll required_len = a[i] + (ll)i - 1;
            adj[required_len].push_back((ll)i - 1);
        }
    }

    cout << dfs(n) << nl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}