#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
deque<char> dq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    int odd = 0;
    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
            odd++;
    }

    if (odd > 1)
        cout << "NO SOLUTION" << endl;

    else if (odd == 1)
    {
        for (auto [x, y] : mp)
        {
            if (y % 2 != 0)
            {
                dq.push_back(x);
                int half = y / 2;
                for (int i = 0; i < half; i++)
                {
                    dq.push_back(x);
                    dq.push_front(x);
                }
            }
        }

        for (auto [x, y] : mp)
        {
            if (y % 2 == 0)
            {
                int half = y / 2;
                for (int i = 0; i < half; i++)
                {
                    dq.push_back(x);
                    dq.push_front(x);
                }
            }
        }
    }

    for (auto v : dq)
        cout << v;
    cout << endl;

    return 0;
}