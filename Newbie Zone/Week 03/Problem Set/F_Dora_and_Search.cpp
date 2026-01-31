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
        vector<int> v;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            s.insert(val);
        }

        bool pairFound = false;
        int i = 0, j = n - 1;
        while (i < j)
        {
            int mn = *s.begin(), mx = *s.rbegin();

            if (v[i] != mn && v[i] != mx && v[j] != mn && v[j] != mx)
            {
                pairFound = true;
                break;
            }
            if (v[i] == mn || v[i] == mx)
            {
                s.erase(v[i]);
                i++;
            }
            else if (v[j] == mn || v[j] == mx)
            {
                s.erase(v[j]);
                j--;
            }
            else
            {
                s.erase(v[i]);
                s.erase(v[j]);
                i++;
                j--;
            }
        }
        if (pairFound)
        {
            cout << i + 1 << " " << j + 1 << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}