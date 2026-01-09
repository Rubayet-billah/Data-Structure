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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int wt = 0;
        for (int i = 2; i <= 100; i++)
        {
            int l = 0, r = n - 1;
            int cnt = 0;
            while (l < r)
            {
                int sum = a[l] + a[r];
                if (sum == i)
                {
                    cnt++;
                    l++, r--;
                }
                else if (sum < i)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            wt = max(wt, cnt);
        }
        cout << wt << "\n";
    }

    return 0;
}