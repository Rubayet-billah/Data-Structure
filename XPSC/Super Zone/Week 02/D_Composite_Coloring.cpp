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

const vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (a[i] % allPrimes[j] == 0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }

    vector<int> ans(n);
    int color = 1;
    for (auto [x, y] : mp)
    {
        for (int i : y)
        {
            ans[i] = color;
        }
        color++;
    }
    cout << mp.size() << nl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    endl;
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