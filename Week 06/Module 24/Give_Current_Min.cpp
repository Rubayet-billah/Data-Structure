#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top();
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
                cout << pq.top();
            else
                cout << "Empty";
        }
        else
        {
            if (!pq.empty())
                pq.pop();
            if (!pq.empty())
                cout << pq.top();
            else
                cout << "Empty";
        }
        cout << endl;
    }

    return 0;
}