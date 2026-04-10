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

int ans;
vector<int> a;

void fun(int l, int r)
{
    if (r - l == 1)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    int maxL = *max_element(a.begin() + l, a.begin() + mid);
    int minR = *min_element(a.begin() + mid, a.begin() + r);
    if (maxL > minR)
    {
        ans++;
        for (int i = 0; i < mid - l; i++)
        {
            swap(a[i + l], a[mid + i]);
        }
    }
    fun(l, mid);
    fun(mid, r);
}

void solve()
{
    int m;
    cin >> m;
    a.resize(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    ans = 0;
    fun(0, m);
    if (!is_sorted(a.begin(), a.end()))
    {
        cout << -1 << nl;
        return;
    }

    cout << ans << nl;
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