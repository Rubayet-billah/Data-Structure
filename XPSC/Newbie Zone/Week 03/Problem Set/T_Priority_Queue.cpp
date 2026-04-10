#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<priority_queue<int>> vpq(n);

    while (q--)
    {
        int cmd, pqIdx;
        cin >> cmd >> pqIdx;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            vpq[pqIdx].push(val);
        }
        else if (cmd == 1)
        {
            if (!vpq[pqIdx].empty())
            {
                cout << vpq[pqIdx].top() << "\n";
            }
        }
        else
        {
            if (!vpq[pqIdx].empty())
            {
                vpq[pqIdx].pop();
            }
        }
    }

    return 0;
}