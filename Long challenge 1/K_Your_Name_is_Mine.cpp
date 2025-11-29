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

bool isSubsequence(const string s1, const string s2)
{
    int i = 0;
    int j = 0;

    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
        }
        j++;
    }
    return i == s1.length();
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        haa return;
    }
    if (s1.size() < s2.size() && isSubsequence(s1, s2))
    {
        haa return;
    }
    if (s2.size() < s1.size() && isSubsequence(s2, s1))
    {
        haa return;
    }
    if (isSubsequence(s1, s2) && isSubsequence(s2, s1))
    {
        haa return;
    }
    else
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