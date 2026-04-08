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
    int N, C;
    cin >> N >> C;

    vector<int> A(N);
    set<int> friends_cookies;
    int min_friend = 200;

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
        friends_cookies.insert(A[i]);
        if (A[i] < min_friend)
        {
            min_friend = A[i];
        }
    }

    int current_alice = C;

       while (true)
    {
        bool cond1 = (current_alice > min_friend);
        bool cond2 = (friends_cookies.find(current_alice) == friends_cookies.end());

        if (cond1 && cond2)
        {
            cout << current_alice - C << nl;
            return;
        }
        current_alice++;
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