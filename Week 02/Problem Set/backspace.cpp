#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (c == '<')
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            st.push(c);
        }
    }
    string result;
    while (!st.empty())
    {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());

    cout << result << '\n';

    return 0;
}