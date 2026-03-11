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
    ll N, K, S, M;
    if (!(cin >> N >> K >> S >> M))
        return;

    // Identify the boundaries for cakes that are NOT M
    ll w_min = (M == 1) ? 2 : 1;
    ll w_max = (M == N) ? N - 1 : N;

    // The 'ok' function: Can we fulfill the order with EXACTLY x cakes of weight M?
    auto ok = [&](ll x)
    {
        ll rem_K = K - x;
        ll rem_S = S - (x * M);

        if (rem_S < 0)
            return false;

        ll current_min = rem_K * w_min;
        ll current_max = rem_K * w_max;

        // Condition 1: Is the required weight in the possible range?
        if (rem_S < current_min || rem_S > current_max)
            return false;

        // Condition 2: The parity trap (N=3, M=2 case)
        // If N=3 and M=2, weights are {1, 3}. Difference is 2.
        // Sum parity must match the parity of (rem_K * 1).
        if (N == 3 && M == 2 && rem_K > 0)
        {
            if ((rem_S - current_min) % 2 != 0)
                return false;
        }

        return true;
    };

    // Because the problem isn't strictly monotonic (adding M could help or hurt),
    // we observe that for a fixed x, the range of reachable sums is [min, max].
    // Since the problem guarantees a solution exists, we can binary search
    // based on whether we need 'more' or 'less' weight.

    ll l = 0, r = K, ans = K;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1; // Try to find a smaller number of M cakes
        }
        else
        {
            // Decision logic to move boundaries:
            ll rem_K = K - mid;
            ll rem_S = S - (mid * M);

            // If rem_S is smaller than the minimum we can produce,
            // we have "too much" weight from our 'mid' cakes of type M.
            if (rem_S < rem_K * w_min)
            {
                // To reduce weight: if M is heavy, decrease x. If M is light, increase x.
                if (M > w_min)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else
            {
                // To increase weight: if M is heavy, increase x. If M is light, decrease x.
                if (M < w_max)
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
    }
    cout << ans << "\n";
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