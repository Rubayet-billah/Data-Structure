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
    int y;
    cin >> y;
    int temp = y + 1;

    while (true)
    {
        string s = to_string(temp);
        set<char> ys;
        for (char c : s)
            ys.insert(c);

        if (ys.size() == 4)
        {
            cout << temp << nl;
            return;
        }
        temp++;
    }
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