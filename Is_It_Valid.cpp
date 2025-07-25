#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        stack<char> st; // 0011
        stack<char> tempSt;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (!st.empty() && ((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0')))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (!st.empty())
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }

    return 0;
}