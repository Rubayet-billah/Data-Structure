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
        int n, q;
        cin >> n >> q;

        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int st;
            cin >> st;
            mp[st].insert(i);
        }

        for (int i = 0; i < q; i++)
        {
            int start, end;
            cin >> start >> end;

            if (mp.find(start) == mp.end() || mp.find(end) == mp.end())
            {
                cout << "NO\n";
                continue;
            }

            int start_pos = *mp[start].begin();
            int end_pos = *mp[end].rbegin();

            if (start_pos < end_pos)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}