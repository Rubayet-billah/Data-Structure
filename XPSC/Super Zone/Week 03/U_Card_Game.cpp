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

    string alice = "Alice", bob = "Bob";

    if (n == 2)
    {
        if (s[0] == 'A')
        {
            cout << alice << nl;
        }
        else
        {
            cout << bob << nl;
        }
        return;
    }

    if (s[0] == s[n - 1])
    {
        if (s[0] == 'A')
        {
            cout << alice << nl;
        }
        else
        {
            cout << bob << nl;
        }
        return;
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            cnt++;
    }

    if (cnt == 1)
    {
        cout << alice << nl;
        return;
    }
    else if (cnt == n - 1)
    {
        cout << bob << nl;
        return;
    }

    if ((s[n - 2] == 'A') && (s[n - 1] == 'A'))
    {
        cout << alice << nl;
    }
    else
    {
        cout << bob << nl;
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