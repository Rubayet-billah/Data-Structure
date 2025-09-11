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
        set<int> nums;
        while (n--)
        {
            int val;
            cin >> val;
            nums.insert(val);
        }
        for (auto it = nums.begin(); it != nums.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}