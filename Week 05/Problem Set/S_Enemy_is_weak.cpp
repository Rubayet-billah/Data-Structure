#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> inv(n);
    pbds<int> pb;
    for (int i = n - 1; i >= 0; i--)
    {
        inv[i] = pb.order_of_key(a[i]);
        pb.insert(a[i]);
    }
    pb.clear();
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll samll_values = pb.order_of_key(a[i]);
        ll big_values = pb.size() - samll_values;
        ans += (inv[i] * big_values);
        pb.insert(a[i]);
    }
    cout << ans << "\n";

    return 0;
}