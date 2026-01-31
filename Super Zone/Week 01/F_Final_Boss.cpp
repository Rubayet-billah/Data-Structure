#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl "\n"

bool can_defeat(ll turns, ll h, const vector<ll> &a, const vector<ll> &c)
{
    ll total = 0;
    int n = a.size();

    for (int i = 0; i < n; ++i)
    {
        ll uses = (turns - 1) / c[i] + 1;
        total += (ll)a[i] * uses;
        if (total >= h)
            return true;
    }

    return total >= h;
}

void solve()
{
    ll h, n;
    cin >> h >> n;

    vector<ll> a(n), c(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : c)
        cin >> x;
    ll dmg = 0;
    for (auto x : a)
        dmg = max(dmg, x);
    if (dmg >= h)
    {
        cout << 1 << nl;
        return;
    }

    ll left = 1;
    ll right = 2e11;

    while (left < right)
    {
        ll mid = left + (right - left) / 2;

        if (can_defeat(mid, h, a, c))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << left << nl;
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