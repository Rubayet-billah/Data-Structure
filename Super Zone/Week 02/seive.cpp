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
    vector<bool> prime(n + 1, true);
    prime[2] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
            for (int j = i + i; j <= n; j++)
            {
                if (j % i == 0)
                    prime[j] = false;
            }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
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