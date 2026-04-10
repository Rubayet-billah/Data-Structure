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
    vector<int> d = {100, 20, 10, 5, 1};
    int bills = 0;
    int temp = n;
    for (int i = 0; i < 5; i++)
    {
        if (temp == 0)
            break;
        if (d[i] > temp)
        {
            continue;
        }
        bills += temp / d[i];
        temp = temp % d[i];
    }
    cout << bills << nl;
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