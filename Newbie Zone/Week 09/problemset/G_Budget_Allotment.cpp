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
    int n, x;
    cin >> n >> x;
    vector<int> need, have;
    ll totalHave = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        int diff = val - x;
        if (diff < 0)
            need.push_back(diff);
        else if (diff > 0)
        {

            have.push_back(diff);
            totalHave += diff;
            cnt++;
        }
        else
            cnt++;
    }
    sort(need.rbegin(), need.rend());
    sort(have.begin(), have.end());

    for (int i = 0; i < need.size(); i++)
    {
        if (need[i] + totalHave < 0)
        {
            break;
        }
        else
        {
            cnt++;
            totalHave += need[i];
        }
    }
    cout << cnt << nl;
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