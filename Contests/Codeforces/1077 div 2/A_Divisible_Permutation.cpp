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
 int mid = (n + 1) / 2;
        
        vector<int> left, right;
        for (int i = mid; i >= 1; --i) {
            left.push_back(i);
        }
        for (int i = mid + 1; i <= n; ++i) {
            right.push_back(i);
        }
        
        vector<int> a;
        int i = 0, j = 0;
        while (i < left.size() || j < right.size()) {
            if (i < left.size()) {
                a.push_back(left[i++]);
            }
            if (j < right.size()) {
                a.push_back(right[j++]);
            }
        }
        
        for (int x : a) {
            cout << x << " ";
        }endl;
    
    
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}