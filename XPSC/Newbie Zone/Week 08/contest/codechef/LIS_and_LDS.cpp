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
    int lis = n;
    vector<int> a(n);
    int lds = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        if (a[i] > 1)
            lds++;
    }
    cin >> a[n - 1];
    cout << lds + 1 << nl;
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