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
        int n, sl;
        cin >> n >> sl;
        vector<char> stripe(n);
        for (int i = 0; i < n; i++)
            cin >> stripe[i];

        int minWcount = 0;
        vector<int> fre(2, 0);
        for (int i = 0; i < sl; i++)
        {
            if (stripe[i] == 'W')
            {
                fre[1]++;
            }
            else
            {
                fre[0]++;
            }
        }
        if (fre[1])
            minWcount += fre[1];

        int l = 0, r = sl - 1;
        while (r < n - 1)
        {
            if (stripe[l] == 'B')
                fre[0]--;
            else
                fre[1]--;

            if (stripe[r + 1] == 'B')
                fre[0]++;
            else
                fre[1]++;

            minWcount = min(minWcount, fre[1]);

            l++, r++;
        }
        cout << minWcount << "\n";
    }

    return 0;
}