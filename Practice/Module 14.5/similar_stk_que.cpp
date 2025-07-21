#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int m;
    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "not similar" << endl;
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "not num similar" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "similar" << endl;
    return 0;
}