#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0;
    ll cnt = 0;
    map<int, int> mp;
    while (r < n)
    {
        mp[a[r]]++;
        if (mp.size() <= k)
        {
            cnt += (r - l + 1);
        }
        else
        {
            while (mp.size() > k)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(a[l]);
                }
                l++;
                if (mp.size() <= k)
                {
                    cnt += (r - l + 1);
                }
            }
        }
        r++;
    }
    cout << cnt << "\n";

    return 0;
}