#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findDivisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (r < 4)
        {
            cout << -1 << "\n";
            continue;
        }
        else if (r - l == 0)
        {
            int div = findDivisor(l);
            if (div != -1)
            {
                cout << div << " " << l - div << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            if (r % 2 == 0)
            {
                cout << 2 << " " << r - 2;
            }
            else
            {
                int tmp = r - 1;

                cout << 2 << " " << tmp - 2;
            }
            cout << "\n";
        }
    }

    return 0;
}