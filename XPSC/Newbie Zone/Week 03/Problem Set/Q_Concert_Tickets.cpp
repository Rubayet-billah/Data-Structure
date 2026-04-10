#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t >> n;
    multiset<int> tickets;
    for (int i = 0; i < t; i++)
    {
        int val;
        cin >> val;
        tickets.insert(val);
    }
    for (int i = 0; i < n; i++)
    {
        int mx_bud;
        cin >> mx_bud;

        auto it = tickets.upper_bound(mx_bud);
        if (it != tickets.begin())
        {
            it--;
            cout << *it << "\n";
            tickets.erase(it);
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}