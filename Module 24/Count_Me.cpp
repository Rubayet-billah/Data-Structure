#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        map<string, int> mp;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        pair<string, int> maxPair = {"", 0};
        while (ss >> word)
        {
            int count = ++mp[word];
            if (count > maxPair.second)
            {
                maxPair.first = word;
                maxPair.second = count;
            }
        }
        cout << maxPair.first << " " << maxPair.second << endl;
    }

    return 0;
}