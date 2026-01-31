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
    cin >> n;
    string s;
    cin >> s;

    int currSt = 0;
    for (char c : s) if (c == '1') currSt++;

    if (currSt == 0) {
        cout << (n + 2) / 3 << nl;
        return;
    }

    vector<int> gaps;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count++;
        } else {
            gaps.push_back(count);
            count = 0;
        }
    }
    gaps.push_back(count); 

    ll need = 0;
    int sz= gaps.size();
    for (int i = 0; i < sz; i++) {
        int k = gaps[i];
        if (k <= 0) continue;

        int actualGap = 0;
        if (i == 0) {
            actualGap = k - 1;
        } else if (i == sz - 1) {
            actualGap = k - 1;
        } else {
            actualGap = k - 2;
        }

        if (actualGap > 0) {
            need += (actualGap + 2) / 3;
        }
    }

    cout << currSt + need << nl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}