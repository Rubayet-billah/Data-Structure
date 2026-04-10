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
    cin >> n;
    vector<int> ans;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int powerFactor = 0;
    for (char c : s)
    {
        int multiple = pow(10, powerFactor);
        int roundNum = (c - '0') * multiple;
        if (roundNum)
            ans.push_back(roundNum);
        powerFactor++;
    }
    cout << ans.size() << nl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    endl
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