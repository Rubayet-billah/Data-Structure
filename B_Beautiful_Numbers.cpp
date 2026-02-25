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
    int sum = 0;
    vector<int> digits;

    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        sum += digit;
        if (i == 0)
        {
            digits.push_back(digit - 1);
        }
        else
        {
            digits.push_back(digit - 0);
        }
    }

    if (sum <= 9)
    {
        cout << 0 << nl;
        return;
    }

    sort(digits.rbegin(), digits.rend());

    int ans = 0;
    int need = sum - 9;
    for (int r : digits)
    {
        need -= r;
        ans++;
        if (need <= 0)
            break;
    }

    cout << ans << nl;
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