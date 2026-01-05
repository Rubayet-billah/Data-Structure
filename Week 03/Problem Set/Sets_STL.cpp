#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    set<int> s;
    while (t--)
    {
        int q, val;
        cin >> q >> val;
        if (q == 1)
        {
            s.insert(val);
        }
        else if (q == 2)
        {
            if (s.count(val))
                s.erase(val);
        }
        else
        {
            if (s.count(val))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}