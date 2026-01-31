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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'I' && s[i - 1] != 'I')
            {
                s[i] = s[i - 1];
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == 'I' && s[i + 1] != 'I')
            {
                s[i] = s[i + 1];
            }
        }
        ll cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                cnt++;
        }
        ll boundary = 0;
        if (n >= 1 && s[0] == s[n - 1])
        {
            boundary = k - 1;
        }
        ll ans = cnt * k + boundary;
        cout << ans << "\n";
    }
    return 0;
}