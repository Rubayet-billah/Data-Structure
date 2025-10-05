#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        v[i] = val;
        if (i % 2 == 1)
            val++;
    }

    vector<long long> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = prefix[r - 1];
        if (l > 1)
            sum -= prefix[l - 2];
        cout << sum << "\n";
    }

    return 0;
}
