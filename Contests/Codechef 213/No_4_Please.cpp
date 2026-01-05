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
        int n;
        cin >> n;
        vector<int> fre(4, 0);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            fre[val]++;
        }
        int rmvCnt = 0;
        if (fre[1] && fre[3])
        {
            int cnt = min(fre[1], fre[3]);
            rmvCnt += cnt;
        }
        if (fre[2] > 1)
        {
            rmvCnt += fre[2] - 1;
        }
        cout << rmvCnt << "\n";
    }

    return 0;
}