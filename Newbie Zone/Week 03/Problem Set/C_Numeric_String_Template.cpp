#include <bits/stdc++.h>
using namespace std;

#define ll long long int

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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if (s.length() != n)
            {
                cout << "NO\n";
                continue;
            }
            map<char, ll> mpStr;
            map<ll, char> mpNum;
            bool valid = true;

            for (int i = 0; i < n; i++)
            {
                char c = s[i];
                ll num = a[i];

                if (mpStr.count(c))
                {
                    if (mpStr[c] != num)
                    {
                        valid = false;
                        break;
                    }
                }
                else
                {
                    mpStr[c] = num;
                }

                if (mpNum.count(num))
                {
                    if (mpNum[num] != c)
                    {
                        valid = false;
                        break;
                    }
                }
                else
                {
                    mpNum[num] = c;
                }
            }

            cout << (valid ? "YES\n" : "NO\n");
        }
    }
    return 0;
}