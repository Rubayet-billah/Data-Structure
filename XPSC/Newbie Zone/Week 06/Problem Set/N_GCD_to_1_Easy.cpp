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
        int r, c;
        cin >> r >> c;
        int a[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                if ((i + j) % 2 == 0)
                    a[i][j] = 2;
                else
                    a[i][j] = 3;
            }
        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}