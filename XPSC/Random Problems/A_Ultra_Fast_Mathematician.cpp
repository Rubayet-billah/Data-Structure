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
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> ans;
    for (int i = 0; i < s1.size(); i++)
    {
        cout << ((s1[i] == s2[i]) ? 0 : 1);
    }
    endl;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}