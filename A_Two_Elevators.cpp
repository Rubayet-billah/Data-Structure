#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int l1Step = 0, l2Step = 0;
        l1Step = abs(1 - a);
        if (c > b)
        {
            l2Step = (c - b) + (c - 1);
        }
        else
        {
            l2Step = b - 1;
        }
        if (l1Step < l2Step)
        {
            cout << 1 << endl;
        }
        else if (l1Step > l2Step)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}