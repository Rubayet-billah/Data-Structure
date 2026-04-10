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

const int N = 1e6;
int z[N];

void solve()
{

    int t, count = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> z[i];
    }
    for (int i = 0; i < t - 1; i++)
    {
        if (z[i] != z[i + 1])
        {
            count++;
        }
    }
    cout << count;
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