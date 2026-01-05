
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
    int n, m;
    cin >> n >> m;
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        p.insert(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        int ans = p.order_of_key(val + 1);
        cout << ans << " ";
    }
    cout << "\n";

    return 0;
}