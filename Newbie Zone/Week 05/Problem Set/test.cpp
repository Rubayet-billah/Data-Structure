#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        int sz = arr.size();
        map<long long, int> mp;
        long long sum = 0;
        int mxlen = 0;
        for (int i = 0; i < sz; i++)
        {
            sum += arr[i];
            if (!mp.count(sum))
                mp[sum] = i;

            if (sum == k)
            {
                mxlen = max(mxlen, i + 1);
            }
            long long remain = sum - k;

            if (mp.count(remain))
            {
                mxlen = max(mxlen, i - mp[remain]);
            }
        }
        return mxlen;
    }
};

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        // code here
        map<long long, int> preSum;

        long long sum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum == k)
            {
                maxLength = max(maxLength, i + 1);
            }

            long long rem = sum - k;

            if (preSum.find(rem) != preSum.end())
            {
                int len = i - preSum[rem];
                maxLength = max(maxLength, len);
            }

            if (preSum.find(sum) == preSum.end())
            {
                preSum[sum] = i;
            }
        }
        return maxLength;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}