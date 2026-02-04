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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        int minP = a[i], maxP = a[i];
        bool found = false;
        int j = i + 1;
        while (j < n)
        {
            if (a[j] - minP > k || maxP - a[j] > k)
            {
                cnt++;
                found = true;
                break;
            }
            minP = min(minP, a[j]);
            maxP = max(maxP, a[j]);
            j++;
        }
        if (found)
        {
            i = j + 1;
        }
        else
        {
            break;
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