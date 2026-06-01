#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int half = n / 2;
    if (half & 1)
    {
        naa return;
    }
    haa;
    int lastOdd = ((half - 1) * 2) - 1;
    int sumEven = 0, sumOdd = 0;
    vector<int> ans;

    for (int i = 2; i <= half * 2; i += 2)
    {
        sumEven += i;
        ans.push_back(i);
    }

    for (int i = 1; i < ((half * 2) - 1); i += 2)
    {
        sumOdd += i;
        ans.push_back(i);
    }

    int lastVal = (sumEven - sumOdd);
    ans.push_back(lastVal);

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