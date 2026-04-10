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
    vector<int> c(n);

    int mx = INT_MIN;
    int maxIdx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] > mx)
        {
            mx = c[i];
            maxIdx = i;
        }
    }

    if (maxIdx == 0)
    {
        cout << -1 << nl;
        return;
    }
    vector<int> a, b;
    for (int i = 0; i < maxIdx; i++)
    {
        a.push_back(c[i]);
    }
    for (int i = maxIdx; i < n; i++)
    {
        b.push_back(c[i]);
    }

    cout << a.size() << nl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    endl;

    cout << b.size() << nl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
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