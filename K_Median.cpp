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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int m = n - k;
    int p = (m + 1) / 2;
    int startIdx = p - 1;
    int endIdx = (p - 1) + k;

    set<int> ans;
    for (int i = startIdx; i <= endIdx; i++)
    {
        ans.insert(a[i]);
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
    endl
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