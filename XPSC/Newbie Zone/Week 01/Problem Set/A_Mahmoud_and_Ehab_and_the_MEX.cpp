#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> fre(105, 0);
    int max_num = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        max_num = max(max_num, val);
        fre[val] = 1;
    }
    int mex;
    int cnt = 0;
    if (fre[q] == 0)
    {
        for (int i = 0; i < q; i++)
        {
            if (fre[i] == 0)
            {
                cnt++;
            }
        }
        cout << cnt;
    }
    else
    {
        for (int i = 0; i < q; i++)
        {
            if (fre[i] == 0)
            {
                cnt++;
            }
        }
        cout << cnt + 1;
    }
    return 0;
}