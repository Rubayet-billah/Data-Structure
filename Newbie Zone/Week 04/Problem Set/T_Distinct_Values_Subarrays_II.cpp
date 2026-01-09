#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int i = 1, j = 1;
    int cnt = 0;
    ll ans = 0;

    while (j <= n)
    {
        mp[v[j]]++;
        if (mp[v[j]] == 1)
            cnt++;

        while (cnt > k)
        {
            mp[v[i]]--;
            if (mp[v[i]] == 0)
                cnt--;
            i++;
        }
        ans += (j - i + 1);
        j++;
    }

    cout << ans << "\n";

    return 0;
}