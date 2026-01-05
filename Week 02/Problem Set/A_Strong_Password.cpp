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
        int insIdx;
        for (insIdx = 1; insIdx < s.size(); insIdx++)
        {
            if (s[insIdx] == s[insIdx - 1])
            {
                break;
            }
        }
        // char charToInsert = s[insIdx - 1] == 'w' ? 'p' : 'd';
        if (s[insIdx - 1] == 'a')
            s.insert(s.begin() + insIdx, 'b');
        else
            s.insert(s.begin() + insIdx, 'a');

        cout << s << endl;
    }

    return 0;
}