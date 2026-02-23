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
    string s;
    cin >> n >> s;

    vector<int> ones, zeros;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones.push_back(i + 1);
        }
        else
        {
            zeros.push_back(i + 1);
        }
    }
    int sz1 = ones.size(), sz0 = zeros.size();

    if (sz1 % 2 == 0)
    {
        cout << sz1 << nl;
        if (sz1 == 0)
        {
            return;
        }
        for (int i = 0; i < sz1; i++)
        {
            cout << ones[i] << " ";
        }
        endl;
    }
    else if (sz0 % 2 != 0)
    {
        cout << sz0 << nl;
        for (int i = 0; i < sz0; i++)
        {
            cout << zeros[i] << " ";
        }
        endl;
    }
    else
    {
        cout << -1 << nl;
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