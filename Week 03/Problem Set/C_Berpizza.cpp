#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, customerNo = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int money;
            cin >> money;
            s.insert({customerNo, money});
            ms.insert({money, -customerNo});
            customerNo++;
        }
        else if (q == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int pos = -ms.rbegin()->second, money = ms.rbegin()->first;
            ans.push_back(pos);
            s.erase({pos, money});
            ms.erase({money, -pos});
        }
    }
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}