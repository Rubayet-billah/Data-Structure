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
    int n, h, l;
    cin >> n >> h >> l;
    int rp = 0, cp = 0, bothp = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bool rt = (x <= h);
        bool ct = (x <= l);

        if (rt && ct)
        {
            bothp++;
        }
        else if (rt)
        {
            rp++;
        }
        else if (ct)
        {
            cp++;
        }
    }

    int mxRow = rp + bothp;
    int mxCol = cp + bothp;
    int total = rp + cp + bothp;

    int ans = min({mxRow, mxCol, total / 2});

    cout << ans << nl;
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