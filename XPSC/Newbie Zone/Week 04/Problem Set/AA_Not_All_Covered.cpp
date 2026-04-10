#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> walls(n + 2, 0);
    vector<ll> pref(n + 2, 0);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        walls[l]++;
        walls[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + walls[i];
    }
    ll minVal = pref[1];
    for (int i = 1; i <= n; i++)
    {
        minVal = min(minVal, pref[i]);
        // cout << pref[i] << " ";
    }
    cout << minVal << "\n";

    return 0;
}