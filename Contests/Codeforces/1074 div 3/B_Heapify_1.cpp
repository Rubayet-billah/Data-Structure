#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

int lastFactor(int val)
{
    while (val > 0 && val % 2 == 0)
    {
        val /= 2;
    }
    return val;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (lastFactor(i) != lastFactor(a[i]))
        {
            flag = false;
            break;
        }
    }

    if (flag)
        haa else naa
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