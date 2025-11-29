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
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << nl;
        return;
    }
    if (__lg(b) > __lg(a))
    {
        cout << -1 << nl;
        return;
    }
    int tmpA = a;
    vector<int> op;
    while (tmpA != b)
    {
        if (b < tmpA)
        {
            int tmpXor = tmpA ^ b;
            tmpA = tmpXor;
            op.push_back(b);
        }
        if (b > tmpA)
        {
            int tmpXor = tmpA ^ b;
            tmpA = tmpXor;
            op.push_back(tmpXor);
        }
    }
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