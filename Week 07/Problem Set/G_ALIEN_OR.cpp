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
    int n, k;
    cin >> n >> k;

    vector<bool> found(k, false);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int cntOn = 0;
        int pos = -1;

        for (int j = 0; j < k; j++)
        {
            if (s[j] == '1')
            {
                cntOn++;
                pos = j;
            }
        }

        if (cntOn == 1)
            found[pos] = true;
    }

    bool ok = true;
    for (int i = 0; i < k; i++)
        if (!found[i])
            ok = false;

    if (ok)
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