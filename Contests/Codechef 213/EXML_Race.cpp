#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int maxSpeed = 0, maxLabel = 1;
        for (int i = 1; i <= n; i++)
        {
            int d, t;
            cin >> d >> t;
            int speed = d / t;
            if (speed > maxSpeed)
            {
                maxSpeed = speed;
                maxLabel = i;
            }
        }
        cout << maxLabel << "\n";
    }

    return 0;
}