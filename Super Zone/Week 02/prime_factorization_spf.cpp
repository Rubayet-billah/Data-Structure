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

const int maxN = 30;
vector<int> allPrimes;

void solve()
{
    int n;
    cin >> n;
    map<int, int> cnt;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cnt[i]++;
            n /= i;
        }
    }
    if (n > 1)
        cnt[n]++;

    for (auto [x, y] : cnt)
    {
        cout << x << " -> " << y << nl;
    }
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}