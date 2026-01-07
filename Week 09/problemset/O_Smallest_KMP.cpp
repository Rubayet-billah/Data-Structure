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
    string s, p;
    cin >> s >> p;
    vector<int> fre(26, 0);
    for (char c : s)
    {
        int idx = c - 'a';
        fre[idx]++;
    }
    for (char c : p)
    {
        int idx = c - 'a';
        fre[idx]--;
    }
    int firstCharPos = p[0] - 'a';
    int insertPos = 0;
    for (int i = 0; i <= firstCharPos; i++)
    {
        insertPos += (fre[i]);
    }

    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        if (fre[i])
        {
            for (int j = 0; j < fre[i]; j++)
            {
                ans += char(i + 'a');
            }
        }
    }
    // ans.insert(insertPos, p);
    // cout << firstCharPos << "  " << insertPos;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i == insertPos - 1)
        {
            for (char c : p)
                cout << c;
        }
    }

    // cout << ans;
    endl;
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