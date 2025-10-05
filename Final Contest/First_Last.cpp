#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<long long int, pair<int, int>> mp;

    for (int i = 1; i <= n; i++)
    {
        long long int val;
        cin >> val;
        if (mp.find(val) == mp.end())
        {
            mp[val] = {i, i};
        }
        else
        {
            mp[val].second = i;
        }
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << "\n";
    }

    return 0;
}
