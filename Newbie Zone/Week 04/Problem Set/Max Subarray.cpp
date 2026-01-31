#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> firstNegInt(vector<int> &a, int k)
    {
        // write code here
        int n = a.size(), l = 0, r = 0;
        vector<int> ans;
        queue<int> q;
        while (r < n)
        {
            if (a[r] < 0)
            {
                q.push(a[r]);
            }
            if (r - l + 1 == k)
            {
                if (!q.empty())
                {
                    ans.push_back(q.front());
                    if (a[l] == q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                    ans.push_back(0);
                }
                l++, r++;
            }
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(9);
    for (int i = 0; i < 9; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 3;
    int segmentSum = 0;
    for (int i = 0; i <= r; i++)
    {
        segmentSum += v[i];
    }

    while (r < 8)
    {
        int tempSum = segmentSum;
        tempSum -= v[l];
        tempSum += v[r + 1];
        segmentSum = max(segmentSum, tempSum);
        l++, r++;
    }
    cout << segmentSum << "\n";

    return 0;
}
