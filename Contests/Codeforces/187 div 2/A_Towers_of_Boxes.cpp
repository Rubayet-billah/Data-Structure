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
    int n, w, d;
    cin >> n >> w >> d;
    int topBox = d / w;
    int towerHeight = topBox + 1;
    int towerCnt = (n + towerHeight - 1) / towerHeight;
    cout << towerCnt << nl;
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