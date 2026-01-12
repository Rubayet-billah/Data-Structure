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
    int cntZeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cntZeros++;
    }
    vector<int> grp(k, n / k);
    int restModulo = n % k;
    for (int i = 0; i < restModulo; i++)
        grp[i]++;

    int mnCnt0 = 0, maxCnt0 = 0;
    for (int i = 0; i < k; i++)
    {
        if (grp[i] & 1)
        {
            mnCnt0 += (grp[i] / 2);
            maxCnt0 += ((grp[i] / 2) + 1);
        }
        else
        {
            mnCnt0 += (grp[i] / 2);
            maxCnt0 += ((grp[i] / 2));
        }
    }
    if (cntZeros <= maxCnt0 && cntZeros >= mnCnt0)
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