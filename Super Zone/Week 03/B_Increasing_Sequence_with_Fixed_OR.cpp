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
    ll n;
    cin >> n;
    deque<ll> ans;
    for (int k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            ll val = n - (1LL << k);
            if (val)
            {
                ans.push_front(val);
            }
        }
    }
    ans.push_back(n);
    cout << ans.size() << nl;
    for (auto value : ans)
    {
        cout << value << " ";
    }
    endl
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