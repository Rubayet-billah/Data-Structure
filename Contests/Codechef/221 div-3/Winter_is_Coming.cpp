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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> days(n);
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    int cnt = 0;
    bool jacket = false;
    for (int i = 0; i < n; i++)
    {
        if (days[i] < a)
        {

            if (!jacket)
            {
                cnt++;
                jacket = true;
            }
        }
        else if (days[i] > b)
        {

            jacket = false;
        }
    }
    cout << cnt << nl;
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