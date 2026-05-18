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

// 0-50 units: ৳4.63/unit
// 0-75 units: ৳5.26/unit
// 76-200 units: ৳7.20/unit
// 201-300 units: ৳7.59/unit
// 301-400 units: ৳8.02/unit
// 401-600 units: ৳12.67/unit
// Above 600 units: ৳14.61/unit

void solve()
{
    int prev, latest;
    if (!(cin >> prev >> latest))
        return;

    int total_units = latest - prev;
    double total_cost = 0;
    int remaining = total_units;

    vector<pair<int, double>> costArr = {
        {75, 5.26},      // 0-75 units
        {125, 7.20},     // 76-200 units (range size: 125)
        {100, 7.59},     // 201-300 units (range size: 100)
        {100, 8.02},     // 301-400 units (range size: 100)
        {200, 12.67},    // 401-600 units (range size: 200)
        {INT_MAX, 14.61} // Above 600
    };

    if (total_units <= 50)
    {
        total_cost = total_units * 4.63;
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            if (remaining <= 0)
                break;
            total_cost += (min(costArr[i].first, remaining) * costArr[i].second);
            remaining -= costArr[i].first;
        }
    }

    cout << fixed << setprecision(2) << "Total Units: " << total_units << nl;
    cout << "Total Cost: ৳" << total_cost << nl;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}