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
    int cnt0 = 0;
    int cntN0 = 0;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            cnt0++;
        else
            cntN0++;
    }
    cout << max(cnt0, cntN0) << nl;
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