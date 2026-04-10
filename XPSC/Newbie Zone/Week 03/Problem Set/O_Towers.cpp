#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> towers;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        auto it = towers.upper_bound(val);
        if (it != towers.end())
        {
            towers.erase(it);
        }
        towers.insert(val);
    }
    cout << towers.size() << "\n";

    return 0;
}