#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout << "Impossible\n";
            continue;
        }
        ll mean = sum / n;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mean)
            {
                cout << i + 1 << "\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}