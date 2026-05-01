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
    int m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        l = 0;
        for (int j = 0; j < n; j++)
        {
            if (m[i] == m[j])
            {
                l++;
            }
            if (j + 1 == n and l == 1)
            {
                cout << i + 1 << nl;
                return;
            }
        }
    }
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