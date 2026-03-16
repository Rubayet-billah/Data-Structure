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
    int n;
    cin >> n;
    map<int, int> cnt;
    int mxFreq = 0;

    for (int i = 0; i < n * n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
        mxFreq = max(mxFreq, cnt[x]);
    }

    if (mxFreq > (n * n - n))
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
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}