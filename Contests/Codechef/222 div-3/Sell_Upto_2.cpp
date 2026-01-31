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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll cnt = 0;
    priority_queue<int> pq;
    for (int i = n - 1; i >= 0; i--)
    {
        pq.push(a[i]);
        pq.push(a[i]);
        if (!pq.empty())
        {
            cnt += pq.top();
            pq.pop();
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