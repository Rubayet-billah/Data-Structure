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
    int l, w, r, g, b;
    cin >> l >> w >> r >> g >> b;

    int width = min(l, w);
    int length = max(l, w);

    vector<int> colors = {r, g, b};
    sort(colors.rbegin(), colors.rend());

    int mx = colors[0];

    if (mx > 2 * length + width)
    {
        cout << 6 << nl;
    }
    else if (colors[0] == 2 * length &&
             colors[1] == width &&
             colors[2] == width)
    {
        cout << 4 << nl;
    }
    else if (colors[0] == 2 * width &&
             colors[1] == length &&
             colors[2] == length)
    {
        cout << 4 << nl;
    }
    else
    {
        cout << 5 << nl;
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