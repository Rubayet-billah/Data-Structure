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
    string s;
    cin >> n >> s;
    vector<int> a(n, 0);
    int l = 1, r = n;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '<')
        {

            a[i + 1] = l;
            l++;
        }
        else
        {

            a[i + 1] = r;
            r--;
        }
    }
    a[0] = l;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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