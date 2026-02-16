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
    vector<ll> fn(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fn[i];
    }
    ll sum = (fn.front() + fn.back()) / (n - 1);
    ll a1 = ((sum - (fn[0] - fn[1])) / 2);
    ll an = ((sum - (fn[n - 1] - fn[n - 2])) / 2);

    vector<ll>
        ans;
    ans.push_back(a1);
    for (int i = 1; i < n - 1; i++)
    {
        ll ai = (fn[i - 1] - 2 * fn[i] + fn[i + 1]) / 2;
        ans.push_back(ai);
    }
    ans.push_back(an);
    for (auto x : ans)
    {
        cout << x << " ";
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