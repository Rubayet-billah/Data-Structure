#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        set<int> nums;
        set<int> temp;
        int ans = 1;
        nums.insert(v[0]);
        for (int i = 1; i < n; i++)
        {
            temp.insert(v[i]);
            if (nums.count(v[i]))
            {
                nums.erase(v[i]);
            }
            if (nums.empty())
            {
                nums = temp;
                ans++;
                temp.clear();
            }
        }

        cout << ans << '\n';
    }
    return 0;
}