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
    vector<int> a(n), b(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    a[0] = b[0];
    a[n - 1] = b[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        a[i] = (b[i - 1] | b[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] & a[i]) != b[i])
        {
            cout << -1 << nl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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