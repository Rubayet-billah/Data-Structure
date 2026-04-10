#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    vector<ll> a(n + 2), ref(n + 2, 0), opCnt(m + 2, 0);
    vector<ll> pref(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> ops(m + 1);
    for (int i = 1; i <= m; i++)
    {
        ll l, r, d;
        cin >> l >> r >> d;
        ops[i] = {l, r, d};
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        opCnt[l]++;
        opCnt[r + 1]--;

        // for (int j = l; j <= r; j++)
        // {
        //     int a = ops[j][0];
        //     int b = ops[j][1];
        //     int x = ops[j][2];
        //     ref[a] += x;
        //     ref[b + 1] -= x;
        // }
    }
    for (int i = 1; i <= m; i++)
    {
        opCnt[i] = opCnt[i - 1] + opCnt[i];
        ops[i].push_back(opCnt[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        ll a = ops[i][0];
        ll b = ops[i][1];
        ll x = ops[i][2];
        ll cnt = ops[i][3];
        ref[a] += (x * cnt);
        ref[b + 1] -= (x * cnt);
    }

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + ref[i];
    }
    for (int i = 1; i <= n; i++)
    {

        cout << a[i] + pref[i] << " ";
    }

    // for (int i = 1; i <= m; i++)
    // {
    //     cout << i << " -> ";
    //     for (auto p : ops[i])
    //     {
    //         cout << p << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}
