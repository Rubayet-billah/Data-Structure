#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define nl "\n"

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << nl;
        return;
    }

    int msbA = __lg(a), msbB = __lg(b);

    if (msbB > msbA)
    {
        cout << -1 << nl;
        return;
    }

    int tmpXor = a ^ b;
    if (tmpXor <= a)
    {
        cout << 1 << nl << tmpXor << nl;
        return;
    }
    else
    {
        int maxNum = (1 << (msbA + 1)) - 1;
        int x1 = a ^ maxNum;
        int x2 = maxNum ^ b;

        cout << 2 << nl << x1 << " " << x2 << nl;
        return;
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
