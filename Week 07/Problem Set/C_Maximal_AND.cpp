#include <bits/stdc++.h>
using namespace std;
#define ll long long

// quick words
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

// fast IO
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int B = 30;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> bits(B + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = B; j >= 0; j--)
        {
            if ((a[i] >> j) & 1)
            {
                bits[j]++;
            }
        }
    }
    ll ans = 0;
    for (int i = B; i >= 0; i--)
    {
        int need = n - bits[i];
        if (need <= k)
        {
            ans += (1LL << i);
            k -= need;
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