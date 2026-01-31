#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        int ans = fact % 10;
        cout << ans << endl;
    }

    return 0;
}