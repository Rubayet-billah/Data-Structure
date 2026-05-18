#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"


ll n,a[1005];
void solve() {
    cin>>n;
		int s=0,v=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==0) v++;
			else v=0;
			s=max(s,v);
		}
		cout<<s<<nl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}