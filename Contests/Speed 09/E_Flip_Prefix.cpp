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
    string s;
    cin >> n >> s;
    ll prefCnt = 0;
    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt1++;
        else
            cnt0++;
        if (cnt1 == cnt0)
        {
            prefCnt++;
        }
    }

    int ans = 1 << prefCnt;
    cout << ans << nl;
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