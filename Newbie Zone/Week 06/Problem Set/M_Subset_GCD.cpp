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
        ll val = n / k;
        for (int i = 0; i < k; i++)
        {
            cout << val << " ";
            val += (n / k);
        }
        cout << "\n";
    }

    return 0;
}