#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> prefix_sum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    for (int k = 0; k < q; k++)
    {
        int fIdx_1_based, sIdx_1_based;
        cin >> fIdx_1_based >> sIdx_1_based;

        long long current_query_sum = prefix_sum[sIdx_1_based] - prefix_sum[fIdx_1_based - 1];

        cout << current_query_sum << "\n";
    }

    return 0;
}