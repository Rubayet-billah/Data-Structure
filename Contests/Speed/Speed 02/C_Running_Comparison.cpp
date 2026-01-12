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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int alice = v[i].first;
            int bob = v[i].second;
            if (bob <= 2 * alice && alice <= 2 * bob)
            {
                cnt++;
            }
        }
        cout << cnt;
        cout << "\n";
    }
    return 0;
}