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
    set<int> s;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        mx = max(mx, x);
    }

    int diff = *s.rbegin() - *s.begin();

    while (true)
    {
        int sm = *s.begin();
        int lg = *s.rbegin();

        diff = min(diff, lg - sm);
        if (sm >= mx)
            break;

        s.erase(s.begin());
        s.insert(sm * 2);
    }

    cout << diff << nl;
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