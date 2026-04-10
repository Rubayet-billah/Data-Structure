#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<int, long long> mp1, mp2;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp1[val]++;
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        mp2[val]++;
    }

    long long pairCount = 0;
    for (auto &p : mp1)
    {
        int x = p.first;
        long long y = p.second;
        pairCount += y * mp2[x];
    }

    cout << pairCount << "\n";
    return 0;
}