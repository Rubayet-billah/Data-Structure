#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        l.push_back(s);
    }
    int t;
    cin >> t;
    auto it = l.end();
    while (t--)
    {
        string qs;
        string val;
        cin >> qs;
        if (qs == "visit")
        {
            cin >> val;
            auto refIt = find(l.begin(), l.end(), val);
            if (refIt != l.end())
            {
                cout << *refIt << endl;
                it = refIt;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        if (qs == "prev")
        {
            if (it != l.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        if (qs == "next")
        {
            if (it != l.end() && next(it) != l.end())
            {
                ++it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}