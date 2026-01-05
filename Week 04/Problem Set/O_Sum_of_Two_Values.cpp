#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    map<int, vector<int>> mp;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int b = x - a;
        if (!mp[b].empty())
        {
            cout << mp[b][0] << " " << i << "\n";
            found = true;
            break;
        }
        mp[a].push_back(i);
    }
    if (!found)
    {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}