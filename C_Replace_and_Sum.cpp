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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> temp(n);
    for (int i = 0; i < n; i++)
        temp[i] = max(a[i], b[i]);

    for (int i = n - 1; i >= 1; i--)
    {
        if (temp[i] > temp[i - 1])
        {
            temp[i - 1] = temp[i];
        }
    }
    vector<ll> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefixSum[i + 1] = 1LL * prefixSum[i] + 1LL * temp[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l - 1] << " ";
    }
    endl;
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