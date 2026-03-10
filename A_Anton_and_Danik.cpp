#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

void solve() {
    int n;
    string s;
    cin>>n>>s;
    map<char,int> mp;
    for (char c:s)
    {
        mp[c]++;
    }
    string ans="Friendship";
    if(mp['A']>mp['D']){
ans = "Anton";
    }else if(mp['A']<mp['D']){
ans = "Danik";
    }
    cout<<ans<<nl;
    
}

int main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}