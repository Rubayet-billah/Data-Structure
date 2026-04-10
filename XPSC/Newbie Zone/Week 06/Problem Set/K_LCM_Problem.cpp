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
        int l, r;
        cin >> l >> r;
        if ((r / 2) >= l)
        {
            cout << l << " " << l * 2 << "\n";
        }
        else
        {

            cout << -1 << " " << -1 << "\n";
        }
    }

    return 0;
}