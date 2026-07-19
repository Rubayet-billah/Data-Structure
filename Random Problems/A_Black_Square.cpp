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

    int sum = 0;
    string m;
    int s[5];
    cin >> s[1] >> s[2] >> s[3] >> s[4];
    cin >> m;
    for (int i = 0; i < m.length(); i++)
    {
        int x = 0;
        x = m[i] - '0';
        sum += s[x];
    }
    cout << sum;
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