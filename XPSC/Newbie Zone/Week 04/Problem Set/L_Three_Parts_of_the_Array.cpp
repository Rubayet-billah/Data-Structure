#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<ll> pref(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    ll max_sum = 0;
    int i = 1, j = n;

    while (i < j)
    {
        ll left = pref[i];
        ll right = pref[n] - pref[j - 1];

        if (left == right)
        {
            max_sum = max(max_sum, left);
            i++;
            j--;
        }
        else if (left < right)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << max_sum << "\n";
    return 0;
}