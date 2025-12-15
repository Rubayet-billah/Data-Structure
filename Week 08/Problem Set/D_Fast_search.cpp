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
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        auto fIt = lower_bound(a.begin(), a.end(), n1);
        auto sIt = upper_bound(a.begin(), a.end(), n2);
        cout << sIt - fIt << " ";
    }
    endl
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}