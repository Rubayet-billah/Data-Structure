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

// A stair satisfies the condition a<b<c
// .
// A peak satisfies the condition a<b>c
// .

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<string> ans = {"STAIR", "PEAK", "NONE"};
    if (b > a && b < c)
    {
        cout << ans[0] << nl;
    }
    else if (b > a && b > c)
    {

        cout << ans[1] << nl;
    }
    else
    {

        cout << ans[2] << nl;
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