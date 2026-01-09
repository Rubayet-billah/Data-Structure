#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        deque<char> dq;
        for (char c : s)
        {
            dq.push_back(c);
        }
        while (dq.size() > 1)
        {
            char f = dq.front(), b = dq.back();
            if (f != b)
            {
                dq.pop_front();
                dq.pop_back();
            }
            else
            {
                break;
            }
        }
        cout << dq.size() << "\n";
    }

    return 0;
}