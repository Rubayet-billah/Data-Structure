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
    string s;
    cin >> s;
    int num = stoi(s);
    if (num & 1)
    {
        cout << 0 << nl;
        return;
    }
    int sz = s.size();
    if (sz == 1)
    {
        cout << -1 << nl;
        return;
    }
    int oddCnt = 0;
    int lastDigit = num % 10;
    bool case1 = false, case2 = false;
    for (int i = sz - 1; i >= 0; i--)
    {
        int nm = s[i] - '0';
        if ((nm & 1))
            oddCnt++;
        if (nm > lastDigit)
        {
            case1 = true;
        }
    }
    if (oddCnt)
    {
        cout << 1 << nl;
        return;
    }
    if (case1)
    {
        cout << 2 << nl;
        return;
    }
    cout << 3 << nl;
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