#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0, minSize = INT_MAX;
    ll sum = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= s && l <= r)
        {
            minSize = min(minSize, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << (minSize == INT_MAX ? -1 : minSize) << '\n';

    return 0;
}