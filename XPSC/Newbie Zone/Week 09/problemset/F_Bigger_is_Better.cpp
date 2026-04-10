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
    string givenName, tempName = "";
    cin >> n >> givenName;
    for (int i = 0; i < n; i++)
    {
        tempName += 'z';
    }
    if (givenName == tempName)
        cout << -1 << nl;
    else
        cout << tempName << nl;
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