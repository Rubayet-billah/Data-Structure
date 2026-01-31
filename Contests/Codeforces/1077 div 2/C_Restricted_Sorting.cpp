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
    cin>>n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(), b.end());
    int k=0;
    for (int i = 0; i < n; i++)
    {
        k= max(k, a[i]-b[i]);
    }
    if(k==0)
    cout<<-1<<nl;
    else
    cout<<k<<nl;
    

    
    
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}