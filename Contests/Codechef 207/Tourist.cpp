#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int min_dis = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int dis = abs(a - x) + abs(b - y);
            min_dis = min(min_dis, dis);
        }
        cout << min_dis << endl;
    }

    return 0;
}