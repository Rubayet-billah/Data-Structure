#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

          int c01 = 0, c10 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
                c01++;
            else if (s[i] == '1' && s[i + 1] == '0')
                c10++;
        }

        if (c01 == c10 && c01 > 0)
        {
            cout << "Alice\n";
            continue;
        }

        if (c01 == 0 && c10 == 0)
        {
            cout << "Bob\n";
            continue;
        }

        bool alice_flag = false;
        if (s[0] == '0' && s[1] == '1')
        {
            if (c01 - 1 == c10 && c10 > 0)
                alice_flag = true;
        }
        else if (s[0] == '1' && s[1] == '0')
        {
            if (c01 == c10 - 1 && c01 > 0)
                alice_flag = true;
        }

        if (s[n - 2] == '0' && s[n - 1] == '1')
        {
            if (c01 - 1 == c10 && c10 > 0)
                alice_flag = true;
        }
        else if (s[n - 2] == '1' && s[n - 1] == '0')
        {
            if (c01 == c10 - 1 && c01 > 0)
                alice_flag = true;
        }

        cout << (alice_flag ? "Alice" : "Bob") << "\n";
    }

    return 0;
}