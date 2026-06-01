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
    string s;
    cin >> s;
    int max_dots = 0;
    int current_dots = 0;
    int total_dots = 0;
    for (auto c : s)
    {
        if (c == '.')
        {
            total_dots++;
            current_dots++;
            max_dots = max(max_dots, current_dots);
        }
        else
        {
            current_dots = 0;
        }
    }
    if (max_dots >= 3)
        cout << 2 << nl;
    else
        cout << total_dots << nl;
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