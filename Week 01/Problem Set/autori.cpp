#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (char c : s)
    {
        if (c - 'A' >= 0 && c - 'A' <= 25)
        {
            ans += c;
        }
    }
    cout << ans << endl;
    return 0;
}