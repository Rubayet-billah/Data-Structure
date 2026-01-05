#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> fre(26, 0);

    for (char c : s)
    {
        fre[c - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}