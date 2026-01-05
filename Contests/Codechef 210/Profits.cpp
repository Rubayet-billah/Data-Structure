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
        int n, x;
        cin >> n >> x;
        int diff = n - x;
        if (diff > 0)
        {
            int profit = diff * (diff + 1) / 2;
            cout << profit << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}