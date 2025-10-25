#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ms.insert(val);
    }
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            ms.insert(val);
        }
        else if (cmd == 1)
        {
            auto it = ms.begin();
            cout << *it << "\n";
            ms.erase(it);
        }
        else
        {
            cout << *ms.rbegin() << "\n";
            ms.erase(--ms.end());
        }
    }

    return 0;
}