#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ml.insert(val);
    }

    int day = 1;
    while (!ml.empty())
    {
        auto it = ml.lower_bound(day);
        if (it == ml.end())
            break;

        ml.erase(it);
        day++;
    }

    cout << day - 1 << "\n";
    return 0;
}