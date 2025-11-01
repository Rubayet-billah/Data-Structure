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
        vector<ll> v;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            sum += abs(val);
        }

        bool nonPosSeg = false;
        ll cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0 && !nonPosSeg)
            {
                nonPosSeg = true;
                cnt++;
            }
            if (v[i] > 0)
            {
                nonPosSeg = false;
            }
        }

        cout << sum << " " << cnt << "\n";
    }
    return 0;
}