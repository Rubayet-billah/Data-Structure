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
        vector<int> v(n + 1);
        vector<ll> pref(n + 1, 0);
        vector<char>
            s(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pref[i] = pref[i - 1] + v[i];
        }
        for (int i = 1; i <= n; i++)
            cin >> s[i];
        int i = 1, j = n;
        ll sum = 0;
        while (i < j)
        {
            while (i < j && s[i] != 'L')
                i++;
            while (i < j && s[j] != 'R')
                j--;

            if (i < j && s[i] == 'L' && s[j] == 'R')
            {
                sum += pref[j] - pref[i - 1];
                i++;
                j--;
            }
        }

        cout << sum << "\n";
    }

    return 0;
}