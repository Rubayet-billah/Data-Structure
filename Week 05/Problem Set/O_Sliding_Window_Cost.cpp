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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    pbds<int> pb;
    int l = 0, r = 0;
    while (r < n)
    {
        pb.insert(a[r]);
        if (r - l + 1 == k)
        {
            int idx = (k - 1) / 2;
            int med = *pb.find_by_order(idx);
        }
    }

    return 0;
}