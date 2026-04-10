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

    ll total = 0;
    for (int i = 0; i < n - 1; i++)
    {
        total += abs(a[i] - a[i + 1]);
    }

    int reduce = max(abs(a[0] - a[1]), abs(a[n - 1] - a[n - 2]));
    for (int i = 1; i < n - 1; i++)
    {
        int prevT = abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]);
        int newT = abs(a[i - 1] - a[i + 1]);
        int gainT = prevT - newT;
        if (reduce < gainT)
        {
            reduce = gainT;
        }
    }
    cout << total - reduce << nl;
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