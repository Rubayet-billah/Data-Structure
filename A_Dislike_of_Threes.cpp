#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i <= 1700; i++)
    {

        if (i % 3 != 0 && i % 10 != 3)
        {
            ans.push_back(i);
        }
    }
    // for (int p : ans)
    // {
    //     cout << p << " ";
    // }
    // endl endl

    cout << ans[n - 1] << nl;
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