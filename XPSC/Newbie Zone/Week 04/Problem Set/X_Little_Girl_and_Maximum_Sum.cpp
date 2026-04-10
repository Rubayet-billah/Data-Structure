#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> d(n + 2, 0);
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++, d[r + 1]--;
    }

    sort(a.begin(), a.end(), greater<int>());
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }
    sort(d.begin(), d.end(), greater<int>());

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (1LL * d[i] * a[i]);
    }
    cout << sum << "\n";

    return 0;
}