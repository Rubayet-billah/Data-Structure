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
    vector<vector<int>> arrs(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        arrs[i].push_back(a);
        arrs[i].push_back(b);
        arrs[i].push_back(c);
    }
    int target = arrs[0][0];

    for (int i = 1; i < n; i++)
    {
        int temp = arrs[i][0];
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