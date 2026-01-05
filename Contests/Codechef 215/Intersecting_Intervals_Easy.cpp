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
    cin >> n;

    vector<ll> a(n + 2), b(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<ll> sumLeftA(n + 2), sumLeftB(n + 2);
    vector<ll> sumRightA(n + 2), sumRightB(n + 2);

    sumLeftA[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        sumLeftA[i] = max(a[i], sumLeftA[i - 1] + a[i]);
    }
    sumLeftB[1] = b[1];
    for (int i = 2; i <= n; i++)
    {
        sumLeftB[i] = max(b[i], sumLeftB[i - 1] + b[i]);
    }
    sumRightA[n] = a[n];
    for (int i = n - 1; i >= 1 <= i; i--)
    {
        sumRightA[i] = max(a[i], sumRightA[i + 1] + a[i]);
    }
    sumRightB[n] = b[n];
    for (int i = n - 1; i >= 1; i--)
    {
        sumRightB[i] = max(b[i], sumRightB[i + 1] + b[i]);
    }

    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ll bestA = sumLeftA[i] + sumRightA[i] - a[i];
        ll bestB = sumLeftB[i] + sumRightB[i] - b[i];

        ans = max(ans, bestA + bestB);
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