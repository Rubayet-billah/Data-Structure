#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, int> mp;
    mp[0] = 1;
    ll curr_sum = 0;
    ll sub_arr_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += v[i];
        sub_arr_cnt += mp[curr_sum - x];
        mp[curr_sum]++;
    }
    cout << sub_arr_cnt << "\n";

    return 0;
}