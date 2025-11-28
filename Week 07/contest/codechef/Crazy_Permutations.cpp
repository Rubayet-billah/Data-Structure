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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        int a1 = a[i], a2 = a[i + 1];
        int b1 = b[i], b2 = b[i + 1];
        if (((a1 < a2) != (b1 < b2)) || ((a1 > a2) != (b1 > b2)))
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "Yes\n" : "No\n");
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