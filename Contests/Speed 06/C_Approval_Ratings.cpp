#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    int totalRating = 0;
    vector<int> points;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        points.push_back(x);
        totalRating += x;
    }
    if (totalRating >= 35)
    {
        cout << 0 << nl;
        return;
    }
    sort(points.begin(), points.end());
    for (int i = 0; i < 5; i++)
    {
        int gain = 10 - points[i];
        totalRating += gain;
        if (totalRating >= 35)
        {
            cout << (i + 1) * 100 << nl;
            return;
        }
    }
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}