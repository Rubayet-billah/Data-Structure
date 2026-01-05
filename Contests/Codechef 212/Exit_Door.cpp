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
        vector<bool> still(n, true);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0;
        for (int i = n; i >= 1; i--)
        {
            int idx = find(a.begin(), a.end(), i) - a.begin();

            int left = 0, right = 0;
            for (int i = 0; i < idx; i++)
                if (still[i])
                    left++;
            for (int i = idx + 1; i < n; i++)
                if (still[i])
                    right++;
            cnt += min(left, right);
            still[idx] = false;
        }
        cout << cnt << "\n";
    }

    return 0;
}