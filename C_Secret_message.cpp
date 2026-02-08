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
    int n, k;
    cin >> n >> k;
    vector<string> s(k);
    vector<int> masks(n, 0);

    for (int i = 0; i < k; i++)
    {
        cin >> s[i];
        for (int j = 0; j < n; j++)
        {
            masks[j] |= (1 << (s[i][j] - 'a'));
        }
    }

    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i * i != n)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());

    for (int d : divisors)
    {
        string res = "";
        bool possible = true;
        for (int j = 0; j < d; j++)
        {
            int common = (1 << 26) - 1;
            for (int pos = j; pos < n; pos += d)
            {
                common &= masks[pos];
            }

            if (common == 0)
            {
                possible = false;
                break;
            }

            for (int bit = 0; bit < 26; bit++)
            {
                if ((common >> bit) & 1)
                {
                    res += (char)('a' + bit);
                    break;
                }
            }
        }

        if (possible)
        {
            string total = "";
            for (int i = 0; i < n / d; i++)
                total += res;
            cout << total << nl;
            return;
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