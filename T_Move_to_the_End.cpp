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
    vector<ll> a(n), maxArr(n), prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    maxArr[0] = a[0];
    for (int i = 1; i < n; i++)
        maxArr[i] = max(maxArr[i - 1], a[i]);

    reverse(a.begin(), a.end());
    reverse(maxArr.begin(), maxArr.end());
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] + maxArr[i] << " ";
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