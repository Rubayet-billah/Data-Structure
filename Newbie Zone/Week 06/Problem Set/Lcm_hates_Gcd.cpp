#include <bits/stdc++.h>
using namespace std;
#define ll long long

int GCD(int a, int b)
{
    return __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = a - GCD(a, b);
        cout << ans << "\n";
    }

    return 0;
}