#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (cin)
    {
        int n;
        cin >> n;
        if (n != 0)
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += i * i;
            }
            cout << sum << endl;
        }
    }

    return 0;
}