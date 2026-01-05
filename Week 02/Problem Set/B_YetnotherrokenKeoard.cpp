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
        string s;
        cin >> s;

        vector<pair<int, char>> lower, upper;

        for (int i = 0; i < (int)s.size(); i++)
        {
            char c = s[i];

            if (c == 'b')
            {
                if (!lower.empty())
                    lower.pop_back();
            }
            else if (c == 'B')
            {
                if (!upper.empty())
                    upper.pop_back();
            }
            else if (islower(c))
            {
                lower.push_back({i, c});
            }
            else if (isupper(c))
            {
                upper.push_back({i, c});
            }
        }

        vector<pair<int, char>> ans = lower;
        ans.insert(ans.end(), upper.begin(), upper.end());
        sort(ans.begin(), ans.end());

        for (auto [idx, ch] : ans)
            cout << ch;
        cout << "\n";
    }

    return 0;
}
