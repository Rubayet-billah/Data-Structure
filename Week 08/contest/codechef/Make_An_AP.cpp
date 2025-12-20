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

// ll LCM(ll a, ll b)
// {
//     return (a / __gcd(a, b)) * b;
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> diffs;
    for (int i = 1; i < n; i++)
    {
        diffs.push_back(a[i] - a[i - 1]);
    }
    int minDiff = 0;
    for (int i = 0; i < diffs.size(); i++)
    {
        // cout << diffs[i] << ' ';
        minDiff = __gcd(minDiff, diffs[i]);
    }
    // cout << minDiff << nl;
    int totalNums = ((a.back() - a.front()) / minDiff) + 1;
    cout << totalNums - n << nl;
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