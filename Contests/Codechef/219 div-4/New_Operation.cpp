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

// for getting maximum value
int recMax(vector<int> &a)
{
    int n = a.size();
    if (n == 2)
    {
        return a[0] + (2 * a[1]);
    }
    int maxVal = -1, maxIdx = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= maxVal)
        {
            maxVal = a[i];
            maxIdx = i;
        }
    }
    int x = a[maxIdx - 1] + (2 * a[maxIdx]);
    a.erase(a.begin() + maxIdx);
    a[maxIdx - 1] = x;
    recMax(a);
}
// for getting minimum value
int recMin(vector<int> &a)
{
    int n = a.size();
    if (n == 2)
    {
        return a[0] + (2 * a[1]);
    }
    int minVal = INT_MAX, minIdx = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < minVal)
        {
            minVal = a[i];
            minIdx = i;
        }
    }
    int x = a[minIdx - 1] + (2 * a[minIdx]);
    a.erase(a.begin() + minIdx);
    a[minIdx - 1] = x;
    recMin(a);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b = a;
    cout << recMin(a) << " " << recMax(b) << nl;
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