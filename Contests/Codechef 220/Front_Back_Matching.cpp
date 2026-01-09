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
    string s;
    cin >> n >> s;
    vector<bool> fre(26, false);
    for (char c : s)
    {
        int idx = c - 'a';
        if (fre[idx])
        {
            haa return;
        }
        fre[idx] = true;
    }
    naa
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