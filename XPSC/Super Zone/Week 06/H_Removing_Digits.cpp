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
const int maxN = 1e6 + 9;
vector<int> dp(maxN, -1);

int f(int num)
{
    if (num == 0)
        return 0;
    if (dp[num] != -1)
        return dp[num];

    string s = to_string(num);
    sort(s.rbegin(), s.rend());
    int maxDigit = s[0] - '0';
    int ans = 1 + f(num - maxDigit);
    return dp[num] = ans;
}

void solve()
{
    int n;
    cin >> n;
    cout << f(n) << nl;
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