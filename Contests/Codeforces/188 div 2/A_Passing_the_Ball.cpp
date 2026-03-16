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
    vector<bool> ans(n, false);

    int idx = 0;
    ans[idx] = true;

    for (int i = 0; i < n; i++)
    {
        if (s[idx] == 'R')
        {
            idx++;
        }
        else
        {
            idx--;
        }
        ans[idx] = true;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i])
            cnt++;
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