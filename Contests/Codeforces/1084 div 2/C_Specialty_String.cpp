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
    int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    if (st.empty())
        haa else naa
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