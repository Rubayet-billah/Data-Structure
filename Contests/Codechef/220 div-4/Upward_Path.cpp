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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> grid;
    for (int i = 0; i < n; i++)
    {
        int mn = min(a[i], b[i]), mx = max(a[i], b[i]);
        grid.push_back({mn, mx});
    }

    bool stepDown = false, flag = false;
    int pos = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int x, a, b;
        if (!stepDown)
        {
            x = grid[i].first;
            a = grid[i + 1].first;
            b = grid[i].second;
            if (x > a && x > b)
                break;
        }

        if (b - x < a - x)
        {
            stepDown = true;
        }
        if (stepDown)
        {
            pos = i;
            break;
        }

        // if (stepDown)
        // {
        //     x = grid[i].second;
        //     a = grid[i + 1].first;
        //     b = grid[i + 1].second;
        //     if (x > a && x > b)
        //         break;
        //     if (a - x < b - x)
        //     {
        //         swap(grid[i + 1].first, grid[i + 1].second);
        //     }
        // }
        // if (i + 2 == n)
        // {
        //     flag = true;
        // }
    }
    // if (flag)
    //     haa else naa
    // cout << pos << nl;
    for (int i = 0; i < n; i++)
    {
        cout << grid[i].first << " ";
    }
    endl;
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