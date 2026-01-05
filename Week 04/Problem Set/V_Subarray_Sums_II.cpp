#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<ll, int> mp;
    mp[0] = 1;
    ll curr_sum = 0, subarr_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum += v[i];
        subarr_cnt += mp[curr_sum - x];
        mp[curr_sum]++;
    }
    cout << subarr_cnt << "\n";
}