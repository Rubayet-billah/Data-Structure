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
    vector<int> limits(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> limits[i];
    vector<bool> friends(n + 1, true);
    vector<int> ans(n + 1, 0);

    int curr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (curr >= limits[i])
        {
            friends[i] = false;
            ans[i] = limits[i];
        }
        if (!friends[i])
        {
            continue;
        }
        ans[i] = min(curr, limits[i]);
        curr++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    endl
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}