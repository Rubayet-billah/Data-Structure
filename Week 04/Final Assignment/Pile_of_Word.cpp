#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> fre1(26, 0), fre2(26, 0);
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() != s2.size())
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < s1.size(); i++)
        {
            int idx1 = s1[i] - 'a';
            int idx2 = s2[i] - 'a';
            fre1[idx1]++;
            fre2[idx2]++;
        }
        if (fre1 == fre2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}