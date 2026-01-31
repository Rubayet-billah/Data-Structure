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
    string s1, s2;
    cin >> n >> s1 >> s2;
    vector<int> fre1(2);
    vector<int> fre2(2);
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '0')
            fre1[0]++;
        else
            fre1[1]++;
        if (s2[i] == '0')
            fre2[0]++;
        else
            fre2[1]++;
    }
    if (fre1 == fre2)
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