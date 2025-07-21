#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while (!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}