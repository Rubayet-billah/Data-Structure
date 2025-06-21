#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> freq(26);
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        freq[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char c = i + 'a';
        if (freq[i] != 0)
        {
            cout << c << " " << ':' << " " << freq[i] << endl;
        }
    }

    return 0;
}