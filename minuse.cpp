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

int n, k, s, m;

int func(int idx, int cnt, int sum)
{
    if (cnt == k)
    {
    }
    if (idx > sum)
    {
        return (sum == 0);
    }
    int weight = 0;
    if (idx <= sum)
    {
        weight += func(idx, cnt + 1, sum - idx);
    }
    weight += func(idx + 1, cnt + 1, sum);

    return weight;
}

void solve()
{
    cin >> n >> k >> s >> m;
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