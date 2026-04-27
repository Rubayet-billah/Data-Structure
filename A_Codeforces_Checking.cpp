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

string code = "codeforces";
void solve()
{
    char c;
    cin >> c;

    size_t pos = code.find(c);

    if (pos != std::string::npos)
    {
        haa
    }
    else
    {
        naa
    }
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