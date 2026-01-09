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
        int n;
        cin >> n;
        map<int, int, greater<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            mp[val] = i;
        }

        int ans = -1;
        for (auto [x, y] : mp)
        {
            for (auto [a, b] : mp)
            {
                if (__gcd(x, a) == 1)
                {
                    ans = max(ans, y + b);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}