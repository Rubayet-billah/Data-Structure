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
    float a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << int(a / b) << nl;
    cout << "ceil " << a << " / " << b << " = " << int((a + b - 1) / b) << nl;
    cout << "round " << a << " / " << b << " = " << round(a / b) << nl;
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