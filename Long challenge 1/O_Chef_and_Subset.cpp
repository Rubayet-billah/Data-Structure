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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(a + b);
    v.push_back(a + c);
    v.push_back(a + d);
    v.push_back(b + c);
    v.push_back(b + d);
    v.push_back(c + d);
    v.push_back(a + b + c);
    v.push_back(a + b + d);
    v.push_back(a + c + d);
    v.push_back(b + c + d);
    v.push_back(a + b + c + d);

    for (int sum : v)
    {
        if (sum == 0)
        {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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