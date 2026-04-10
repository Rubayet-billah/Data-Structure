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
        string a, b;
        cin >> a >> b;
        int freeEven = 0, freeOdd = 0, odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] == '1')
                    even++;
                if (b[i] == '0')
                    freeEven++;
            }
            else
            {
                if (a[i] == '1')
                    odd++;
                if (b[i] == '0')
                    freeOdd++;
            }
        }

        if (freeEven >= odd && freeOdd >= even)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}