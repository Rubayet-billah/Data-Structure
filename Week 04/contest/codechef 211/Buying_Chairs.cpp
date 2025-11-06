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
        int w, p, k;
        cin >> w >> p >> k;
        int wChairs = min(k, w);
        int pChairs = k - wChairs;

        cout << ((wChairs * 2) + pChairs) << '\n';
    }
    return 0;
}