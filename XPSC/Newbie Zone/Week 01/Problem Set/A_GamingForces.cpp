#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 1)
            {
                break;
            }
            else
            {
                count1++;
            }
        }
        // count1 = 5;
        // int rest = count1 % 2 == 0 ? 8 - count1 : 8 - count1 + 1;
        int restMove = count1 % 2 == 0 ? v.size() - count1 : v.size() - count1 + 1;
        int onesMove = count1 / 2;
        cout << restMove + onesMove << "\n";
    }

    return 0;
}