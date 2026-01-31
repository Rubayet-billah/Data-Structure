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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = 101;
    vector<int> cnt(mx, 0);

    int len = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt[1]++;
            len++;
        }
        else if (a[i] >= 2 && a[i] < mx)
        {
            if (cnt[a[i] - 1] > 0)
            {
                cnt[a[i]]++;
                len++;
            }
        }
    }

    cout << len << nl;
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