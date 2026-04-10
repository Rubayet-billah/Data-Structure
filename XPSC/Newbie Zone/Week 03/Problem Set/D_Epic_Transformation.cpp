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
        map<int, int> cnt;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : cnt)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--, b--;
            if (a > 0)
            {
                pq.push(a);
            }
            if (b > 0)
            {
                pq.push(b);
            }
        }
        if (pq.empty())
        {
            cout << 0 << "\n";
        }
        else
        {
            int length = pq.top();
            cout << length << "\n";
        }
    }

    return 0;
}