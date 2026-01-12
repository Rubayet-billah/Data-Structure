#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            ms.insert(val);
        }
        if (ms.count(k) || *ms.rbegin() < k || *ms.begin() > k)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}