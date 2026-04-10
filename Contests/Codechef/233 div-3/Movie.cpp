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
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;
    int combo = min(n, m);
    int cost = combo * c;

    int tickets = n - combo;
    int popcorn = m - combo;

    cost += (tickets * a);
    cost += (popcorn * b);

    cout << cost << nl;
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