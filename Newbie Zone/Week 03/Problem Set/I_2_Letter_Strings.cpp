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
        map<string, long long> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }

        long long cnt = 0;
        for (auto [x, y] : mp)
        {
            string l = x.substr(0, 1);
            for (char c = 'a'; c <= 'k'; c++)
            {
                string tms = l + c;
                if (mp.count(tms) && x != tms)
                {
                    cnt += (mp[tms] * mp[x]);
                }
            }

            string r = x.substr(1, 1);
            for (char c = 'a'; c <= 'k'; c++)
            {
                string tms = string(1, c) + r;
                if (mp.count(tms) && x != tms)
                {
                    cnt += (mp[tms] * mp[x]);
                }
            }
        }

        cout << cnt / 2 << "\n";
    }

    return 0;
}
