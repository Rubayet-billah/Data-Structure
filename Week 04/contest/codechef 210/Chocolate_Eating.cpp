#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = a + b;
        if (a == b)
            cout << ans - 1 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}