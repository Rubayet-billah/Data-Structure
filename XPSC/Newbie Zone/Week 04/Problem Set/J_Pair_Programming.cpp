#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a, b;
        int newLines = 0, endline = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a.push_back(val);
            if (val == 0)
                newLines++;
            else
                endline = max(endline, val);
        }
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            b.push_back(val);
            if (val == 0)
                newLines++;
            else
                endline = max(endline, val);
        }
        if ((k + newLines) < endline)
        {
            cout << "-1\n";
            continue;
        }
        else
        {
            vector<int> ans;
            int i = 0, j = 0, currLines = k;
            while (i < n || j < m)
            {
                if (i < n && a[i] <= currLines)
                {
                    ans.push_back(a[i]);
                    if (a[i] == 0)
                        currLines++;
                    i++;
                }
                else if (j < m && b[j] <= currLines)
                {
                    ans.push_back(b[j]);
                    if (b[j] == 0)
                        currLines++;
                    j++;
                }
                else
                {
                    cout << "-1";
                    goto end;
                }
            }
            for (auto x : ans)
            {
                cout << x << " ";
            }
        end:;
            cout << "\n";
        }
    }

    return 0;
}