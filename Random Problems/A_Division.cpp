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

// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399

void solve()
{
    int rating;
    cin >> rating;
    int ans = 0;
    if (rating >= 1900)
        ans = 1;
    else if (rating >= 1600)
        ans = 2;
    else if (rating >= 1400)
        ans = 3;
    else
        ans = 4;
    cout << "Division " << ans << nl;
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