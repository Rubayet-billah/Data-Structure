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
    int n, m;
    ll h;
    cin >> n >> m >> h;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> add(n + 1, 0);
    vector<int> lastCnt(n + 1, 0);

    int overflowCnt = 1;

    for (int i = 0; i < m; i++)
    {
        int b;
        ll c;
        cin >> b >> c;
        if (lastCnt[b] != overflowCnt)
        {
            add[b] = 0;
            lastCnt[b] = overflowCnt;
        }

        add[b] += c;

        if (a[b] + add[b] > h)
        {
            overflowCnt++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (lastCnt[i] != overflowCnt)
            cout << a[i] << " ";
        else
            cout << a[i] + add[i] << " ";
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