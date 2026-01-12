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
        vector<int> v;
        string s;
        cin >> s;
        for (char c : s)
        {
            v.push_back(c - '0');
        }
        int lIdx = -1, rIdx = -1;
        for (int i = 0; i < n; i++)
        {
            if (lIdx == -1 && v[i] == 1)
            {
                lIdx = i;
            }
            if (v[i] == 1)
            {
                rIdx = i;
            }
        }
        int zeroCnt = 0;
        if (lIdx == -1)
        {
            cout << zeroCnt << endl;
            continue;
        }
        for (int i = lIdx; i <= rIdx; i++)
        {
            if (v[i] == 0)
            {
                zeroCnt++;
            }
        }
        cout << zeroCnt << endl;
    }

    return 0;
}