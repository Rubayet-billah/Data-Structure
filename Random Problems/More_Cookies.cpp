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
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    set<int> s;
    bool same = false, small = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        if (a[i] == c)
            same = true;
        if (a[i] < c)
            small = true;
    }

    if (small && !same)
    {
        cout << 0 << nl;
        return;
    }

    int curr = c;

    while (true)
    {
        if (s.count(curr))
        {
            curr++;
        }
        else
        {

            if (small || curr > *s.begin())
            {
                break;
            }
            curr++;
        }
    }

    cout << curr - c << nl;
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