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
        vector<int> v;
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            if (i % l == 0)
                v.push_back(i);
        }
        int sEven = 0, sOdd = 0;
        for (int i : v)
        {
            if (i % 2 == 0)
                sEven += i;
            else
                sOdd += i;
        }
        if (sEven >= sOdd)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}