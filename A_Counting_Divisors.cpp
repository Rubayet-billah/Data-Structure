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
    vector<vector<int>> divisors(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {

            divisors[j].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j <= n; j++)
        {
            cout << divisors[i][j] << " ";
        }
        endl;
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