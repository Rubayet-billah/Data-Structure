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
        int a, b, n;
        cin >> a >> b >> n;
        if (a % b == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        ll minMltp = ((n + a - 1) / a);
        ll ans = a * minMltp;
        while (ans % b == 0)
        {
            ans += a;
        }
        cout << ans << "\n";
    }

    return 0;
}