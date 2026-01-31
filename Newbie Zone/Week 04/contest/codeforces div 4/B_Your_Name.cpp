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
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> fre1(26, 0), fre2(26, 0);
        for (int i = 0; i < n; i++)
        {
            fre1[s1[i] - 'a']++;
            fre2[s2[i] - 'a']++;
        }
        if (fre1 == fre2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}