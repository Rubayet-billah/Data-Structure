#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
// #define nl "\n"

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    int soda=(k*l)/nl;
    int lime= c*d;
    int salt = p/np;
    int ans = min({soda,lime,salt})/n;
    cout<<ans;
}

int main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}