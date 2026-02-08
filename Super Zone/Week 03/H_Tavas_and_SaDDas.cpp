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
    int n;
    cin >> n;
    if (n == 4)
    {
        cout << 1 << nl;
        return;
    }
    if (n == 7)
    {
        cout << 2 << nl;
        return;
    }
    int currPos = 0;
    int power = 0;
    while (n > 1)
    {
        int x = n % 10;
        if (x == 7)
        {
            currPos += (1 << power);
        }
        n /= 10;
        power++;
    }
    int prevPos = 0;
    for (int i = 0; i < power; i++)
    {
        prevPos += (1 << i);
    }
    cout << prevPos + currPos << nl;
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