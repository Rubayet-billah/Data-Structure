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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int opCnt = 0;

        int l = 0, r = 0;
        while (l < n)
        {
            if (s[l] == 'B')
            {
                opCnt++;
                l += k;
            }
            else
            {
                l++;
            }
        }
        cout << opCnt << "\n";
    }

    return 0;
}