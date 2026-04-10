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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j <= a[i]; j++)
        {
            while (a[i] % j == 0)
            {
                cnt[j]++;
                a[i] /= j;
            }
        }
        if (a[i] > 1)
        {
            cnt[a[i]]++;
        }
    }

    bool flag = true;
    for (auto [x, y] : cnt)
    {
        if (y % n != 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
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