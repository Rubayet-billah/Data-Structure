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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (v.size() >= 3)
    {
        vector<int> temp = {v[0], v[1], v[2]};
        sort(temp.begin(), temp.end());
        int med = temp[1];

        if (v[0] == med)
            v.erase(v.begin());
        else if (v[1] == med)
            v.erase(v.begin() + 1);
        else
            v.erase(v.begin() + 2);
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << (i + 1 < v.size() ? " " : nl);
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}