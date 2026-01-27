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
    {
        cin >> a[i];
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != n - i && l == -1)
        {
            l = i;
        }
        if (a[i] == n - l && r == -1)
        {
            r = i;
        }
    }
    if (l == -1 && r == -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        endl;
        return;
    }
    for (int i = 0; i < l; i++)
        cout << a[i] << " ";
    for (int i = r; i >= l; i--)
        cout << a[i] << " ";
    for (int i = r + 1; i < n; i++)
        cout << a[i] << " ";
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