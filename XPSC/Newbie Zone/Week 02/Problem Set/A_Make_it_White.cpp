#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int lx = -1, rx = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (lx == -1 && s[i] == 'B')
            {
                lx = i;
            }
            if (s[i] == 'B')
            {
                rx = i;
            }
        }
        int cellCnt = 0;
        if (lx == -1)
        {
            cout << cellCnt << endl;
            return 0;
        }
        else
        {
            cout << rx - lx + 1 << endl;
        }
    }

    return 0;
}