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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(arr[i]);
    }

    int count = 0;
    while (dq.size() > 1)
    {

        int a = dq.back();
        dq.pop_back();

        int b = dq.back();
        dq.pop_back();

        if (a == b)
        {
            dq.push_front(0);
        }
        else
        {
            dq.push_back(b);
            count++;
        }
    }

    int ans = count + dq.size();
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