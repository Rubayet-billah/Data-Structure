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
        sort(v.begin(), v.end(), greater<int>());
        int maxVal = v.front();
        int minVal = v.back();
        int i = 0;
        int j = v.size() - 1;
        int cnt = 0;
        while (i != j)
        {
            if ((minVal + v[i]) % 2 == 0 || (maxVal + v[j]) % 2 == 0)
            {
                break;
            }
            else
            {
                cnt++;
            }
            i++;
            j--;
        }
        cout << cnt << endl;
    }

    return 0;
}