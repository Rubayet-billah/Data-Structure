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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());

    deque<int> ans(n);
    for (int i = 0; i < n / 2; i++)
    {
        ans[i] = a[n - 1 - i];
        ans[n - 1 - i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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