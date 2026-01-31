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
    string s;
    cin >> n >> k >> s;
    int posOfLstOne = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            posOfLstOne = i;
            break;
        }
    }
    if (posOfLstOne == -1)
    {
        cout << 0 << nl;
        return;
    }
    int cntZero = 0, cntOne = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cntZero++;
        if (s[i] == '1')
            cntOne++;
    }
    int zerosBeforeOne = cntZero - n + posOfLstOne + 1;
    int remainZeros = zerosBeforeOne - k;
    if (remainZeros > 0)
    {
        cout << cntOne + k << nl;
    }
    else
    {
        cout << posOfLstOne + 1 << nl;
    }
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