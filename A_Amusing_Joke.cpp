#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;

    vector<int> count(26, 0);

    for (char ch : a)
        count[ch - 'A']++;
    for (char ch : b)
        count[ch - 'A']++;

    for (char ch : c)
        count[ch - 'A']--;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            naa return;
        }
    }
    haa;
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
