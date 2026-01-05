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
        int cnt00 = 0, cnt11 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                cnt00++;
            if (s[i] == '1' && s[i + 1] == '1')
                cnt11++;
        }
        if (cnt11 >= cnt00)
            cout << 0 << "\n";
        else
            cout << (cnt00 - cnt11 + 1) / 2 << "\n";
    }

    return 0;
}
