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
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
            break;

        int maxEl = *s.rbegin();

        if (a[i] == maxEl)
        {
            cnt++;
            s.erase(s.find(a[i]));
        }
        else
        {
            s.erase(s.find(a[i]));
        }
    }
    cout << cnt << "\n";
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