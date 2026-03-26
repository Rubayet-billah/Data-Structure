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
    {
        cin >> a[i];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int lg = 0;
        int sm = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                lg++;
            }
            else if (a[j] < a[i])
            {
                sm++;
            }
        }
        ans.push_back(max(lg, sm));
    }
    for (int p : ans)
    {
        cout << p << " ";
    }

    cout << nl;
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