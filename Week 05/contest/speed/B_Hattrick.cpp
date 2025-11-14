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
        vector<char> a(6);
        for (int i = 0; i < 6; ++i)
        {
            cin >> a[i];
        }
        bool flag = false;
        for (int i = 0; i <= 3; i++)
        {
            if (a[i] == 'W' && a[i + 1] == 'W' && a[i + 2] == 'W')
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}