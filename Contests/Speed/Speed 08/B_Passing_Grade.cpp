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
    int chefMark;
    cin >> chefMark;
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        if (x >= chefMark)
        {
            cnt++;
        }
    }
    cout << cnt << nl;
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