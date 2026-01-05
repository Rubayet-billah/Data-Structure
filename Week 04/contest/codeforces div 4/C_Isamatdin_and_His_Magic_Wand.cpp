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
        int even = 0, odd = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            if (val % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even != 0 && odd != 0)
        {
            sort(v.begin(), v.end());
        }
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}