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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, int> mp;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {

            if (mp.find(a[i]) != mp.end())
            {
                break;
            }

            mp[a[i]] = i;
            ans = i;
        }

        cout << ans << '\n';
    }
    return 0;
}