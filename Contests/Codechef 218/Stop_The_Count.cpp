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
    int cntOne = 0, cntZero = 0;
    int waysCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cntOne++;
        else
            cntZero++;
        if (cntOne > cntZero)
            waysCount++;
    }
    cout << waysCount << nl;
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