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
    int x;
    cin >> x;
    vector<int> a;
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            a.push_back(0);
            x /= 2;
        }
        else
        {
            if (x % 4 == 3)
            {
                a.push_back(-1);
                x = (x + 1) / 2;
            }
            else
            {
                a.push_back(1);
                x = (x - 1) / 2;
            }
        }
    }
    cout << a.size() << nl;
    for (auto i : a)
    {
        cout << i << " ";
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