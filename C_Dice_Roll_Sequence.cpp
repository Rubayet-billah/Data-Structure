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

bool invalid(int x, int y)
{
    return (x == y || x + y == 7);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int op = 0;
    for (int i = 1; i < n; i++)
    {
        if (invalid(a[i - 1], a[i]))
        {
            int nextVal = (i + 1 < n) ? a[i + 1] : -1;

            for (int p = 1; p <= 6; p++)
            {
                if (!invalid(a[i - 1], p))
                {
                    if (nextVal == -1 || !invalid(p, nextVal))
                    {
                        a[i] = p;
                        break;
                    }
                }
            }
            op++;
        }
    }
    cout << op << nl;
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