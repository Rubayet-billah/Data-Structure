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
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int color = -1;
    int mx = -1;

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] > mx)
        {
            mx = freq[i];
            color = i;
        }
    }
    cout << color << nl;
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