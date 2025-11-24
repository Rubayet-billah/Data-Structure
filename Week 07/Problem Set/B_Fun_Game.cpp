#include <bits/stdc++.h>
using namespace std;

#define haa cout << "YES\n"
#define naa cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        haa;
        return;
    }

    int firstS = -1, firstT = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && firstS == -1)
            firstS = i;
        if (t[i] == '1' && firstT == -1)
            firstT = i;
    }
    if (firstT != -1 && (firstS == -1 || firstT < firstS))
    {
        naa;
    }
    else
    {
        haa;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
        solve();
    return 0;
}