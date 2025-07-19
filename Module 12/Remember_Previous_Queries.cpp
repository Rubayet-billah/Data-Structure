#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else
        {
            int sz = l.size();
            if (v < sz)
            {
                l.erase(next(l.begin(), v));
            }
        }
        cout << "L -> ";
        for (auto it : l)
        {
            cout << it << " ";
        }
        cout << endl;
        l.reverse();
        cout << "R -> ";
        for (auto it : l)
        {
            cout << it << " ";
        }
        cout << endl;
        l.reverse();
    }

    return 0;
}