#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        string sub = s.substr(i, 2);
        mp[sub]++;
    }

    string max_str = "";
    int max_count = 0;
    for (auto [x, y] : mp)
    {
        if (y > max_count)
        {
            max_count = y;
            max_str = x;
        }
    }

    cout << max_str << "\n";

    return 0;
}