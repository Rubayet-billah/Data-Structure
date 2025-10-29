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
        vector<int> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            sum += abs(val);
        }

        int l = 0, r = 0, cnt = 0;
        while (r < n)
        {
            if (v[l] < 0)
            {
                while ()
                {
                    /* code */
                }
            }
        }
    }
    return 0;
}