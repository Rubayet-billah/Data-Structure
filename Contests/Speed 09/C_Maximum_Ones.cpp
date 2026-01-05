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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    bool first1 = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            first1 = true;
            cnt1++;
        }
        if (first1 && s[i] == '0')
        {
            cnt0++;
        }
    }
    int ans;
    if (k > cnt0)
        ans = cnt0 + cnt1;
    else
        ans = k + cnt1;
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