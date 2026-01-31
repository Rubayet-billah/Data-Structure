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
    int s, k, m;
    cin >> s >> k >> m;
    if (k > m)
    {
        if (s - m > 0)
        {
            cout << s - m << nl;
        }
        else
        {
            cout << 0 << nl;
        }
    }
    if (k > s && k <= m)
    {
        int remain = m % k;
        if (s - remain > 0)
        {
            cout << s - remain << nl;
        }
        else
        {
            cout << 0 << nl;
        }
    }
    if (s >= k && k <= m)
    {
        int flip = m / k;
        int remain = m % k;
        if (flip & 1)
        {
            if (k - remain > 0)
            {
                cout << k - remain << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
        else
        {
            if (s - remain > 0)
            {
                cout << s - remain << nl;
            }
            else
            {
                cout << 0 << nl;
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