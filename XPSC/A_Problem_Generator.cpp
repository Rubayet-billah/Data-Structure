#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> fre(7, 0);
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            int idx = s[i] - 'A';
            fre[idx]++;
        }
        int cnt = 0;
        for (int i = 0; i < 7; i++)
        {
            if (fre[i] < m)
            {
                cnt += m - fre[i];
            }
        }
        cout << cnt << endl;
    }

    return 0;
}