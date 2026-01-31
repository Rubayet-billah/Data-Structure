#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool flag = false;
        int cnt = 0;
        for (char c : s)
        {
            if (c == '0')
                flag = true;
            if (flag && c == '1')
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}