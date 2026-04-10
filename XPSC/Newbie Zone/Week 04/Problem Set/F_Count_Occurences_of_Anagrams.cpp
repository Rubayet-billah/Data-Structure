#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(string &pat, string &txt)
    {
        int n = txt.size();
        int m = pat.size();
        if (m > n)
            return 0;

        vector<int> patCount(26, 0);
        vector<int> tempCount(26, 0);

        for (char c : pat)
        {
            patCount[c - 'a']++;
        }

        int count = 0;

        for (int i = 0; i < m; i++)
        {
            tempCount[txt[i] - 'a']++;
        }
        if (tempCount == patCount)
            count++;

        int l = 0, r = m - 1;
        while (r < n - 1)
        {
            tempCount[txt[r + 1] - 'a']++;
            tempCount[txt[l] - 'a']--;
            if (tempCount == patCount)
                count++;
            l++, r++;
        }

        return count;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt = "forxxorfxdofr", pat = "for";

    Solution sol;
    // sol.search(pat, txt);
    cout << sol.search(pat, txt) << "\n";

    return 0;
}