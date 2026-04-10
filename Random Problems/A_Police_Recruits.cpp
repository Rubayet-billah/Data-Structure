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
    int a[n];
    int utc = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            temp = temp + a[i];
        }
        else
        {
            utc = utc + 1;
            if (temp > 0)
            {
                temp = temp - 1;
                utc = utc - 1;
            }
            else
            {
                continue;
            }
        }
    }
    cout << utc;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
