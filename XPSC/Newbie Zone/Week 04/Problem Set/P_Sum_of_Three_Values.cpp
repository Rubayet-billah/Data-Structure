#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    map<int, int> mp;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;
        mp[v[i]] = i;
    }

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            int c = x - (v[i] + v[j]);
            if (mp[c] > 0 && (i != j && j != mp[c]))
            {
                found = true;
                cout << i << " " << j << " " << mp[c] << "\n";
                break;
            }
        }
        if (found)
            break;
    }
    if (!found)
    {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}