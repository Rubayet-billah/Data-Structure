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
    int n, x;
    cin >> n >> x;

    deque<int> dq(n);

    for (int i = 0; i < n; i++)
        cin >> dq[i];

    sort(dq.begin(), dq.end());

    int cnt = 0;

    while (!dq.empty())
    {
        if (dq.size() == 1)
        {
            cnt++;
            break;
        }

        int lightest = dq.front();
        int heaviest = dq.back();

        if (lightest + heaviest <= x)
        {
            dq.pop_front();
            dq.pop_back();
        }
        else
        {
            dq.pop_back();
        }

        cnt++;
    }

    cout << cnt << '\n';
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}