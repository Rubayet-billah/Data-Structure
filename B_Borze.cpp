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
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 0 << nl;
        return;
    }
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            ans += '0';
        else
        {
            if (s[i] == '-')
            {
                if (s[i + 1] == '.')
                    ans += '1';
                else
                    ans += '2';
            }
            i++;
        }
    }

    cout << ans << nl;
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