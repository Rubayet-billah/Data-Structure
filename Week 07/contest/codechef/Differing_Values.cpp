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
    int cntOnes = 0, cntZeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cntZeros++;
        else
            cntOnes++;
    }
    int mn = min(cntOnes, cntZeros);
    int mx = n - mn;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
    }
    // if (mn < n - k)
    // {
    //     naa return;
    // }
    int diff = abs(cntOnes - cntZeros);
    if (diff > (k))
        naa else haa
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