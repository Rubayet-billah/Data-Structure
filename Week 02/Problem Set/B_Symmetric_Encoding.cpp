#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> unique_char;
        for (char c : s)
        {
            unique_char.insert(c);
        }
        vector<char> v;
        for (char c : unique_char)
        {
            v.push_back(c);
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            char original_char = s[i];
            int pos = -1;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == original_char)
                {
                    pos = j;
                    break;
                }
            }
            char mirror = v[v.size() - 1 - pos];
            ans += mirror;
        }
        cout << ans << "\n";
    }
    return 0;
}