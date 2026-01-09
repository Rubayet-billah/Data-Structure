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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        vector<pair<int, int>> erasePairs;
        for (int i = 1; i < n; i++)
        {
            int l = v.back();
            v.pop_back();
            int r = v.back();
            v.pop_back();
            // int l = 4, r = 3;
            // cout << "pair " << l << "  " << r << "\n";
            erasePairs.push_back({l, r});
            int newVal = (l + r + 1) / 2;
            v.push_back(newVal);
            // cout << "new " << newVal << "\n";
        }
        for (auto it : v)
        {
            cout << it << "\n";
        }
        for (auto [x, y] : erasePairs)
        {
            cout << x << " " << y << '\n';
        }
    }

    return 0;
}