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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int a1 = a[0];
    vector<int> freq;

    // a1 bad e baki frequency store korar jnno
    for (auto const &[val, fq] : mp)
    {
        if (val != a1)
        {
            freq.push_back(fq);
        }
    }

    // choto frequency age remove korar jonno
    sort(freq.begin(), freq.end());

    int ans = mp.size();
    for (int i : freq)
    {
        if (k >= i)
        {
            k -= i;
            ans--;
        }
        else
            break;
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