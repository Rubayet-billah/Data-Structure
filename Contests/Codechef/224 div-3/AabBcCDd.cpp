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
    string s;
    cin >> s;
    vector<int> fre(26, 0);
    for (char c : s)
    {
        fre[tolower(c) - 97]++;
    }
    sort(fre.rbegin(), fre.rend());
    int ans = fre[0] + fre[1];
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