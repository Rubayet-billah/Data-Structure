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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int temp = n + 1;
        for (int i = 0; i < n; i++)
        {
            int ans = temp - v[i];
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}