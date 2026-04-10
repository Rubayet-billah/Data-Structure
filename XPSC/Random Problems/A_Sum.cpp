#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    vector<int> nums(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    if ((nums[0] + nums[1]) == nums[2])
        haa else naa
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}