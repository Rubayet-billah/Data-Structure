#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        string s;
        cin >> sz >> s;
        int count1 = 0;
        int count0 = 0;
        for (char c : s)
        {
            if (c == '1')
                count1++;
            else
                count0++;
        }
        int totalCnt = ((sz - 1) * count1) + count0;
        cout << totalCnt << endl;
    }

    return 0;
}