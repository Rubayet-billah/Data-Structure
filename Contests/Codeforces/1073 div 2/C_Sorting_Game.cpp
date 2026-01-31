#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int start = -1;
    int end = -1;

    int i = 0;
    while (i < n && s[i] == '0')
        i++;

    if (i == n)
    {

        cout << "Bob" << nl;
        return;
    }

    start = i;

    while (i < n && s[i] == '1')
        i++;

    if (i == n || s[i] == '1')
    {

        bool has_inversion = false;
        for (int j = i; j < n; j++)
        {
            if (s[j] == '0')
            {
                has_inversion = true;
                break;
            }
        }
        if (!has_inversion)
        {
            cout << "Bob" << nl;
            return;
        }
    }

    if (i < n && s[i] == '0')
    {
        end = i;

        while (i < n && s[i] == '0')
            i++;
        end = i - 1;
    }

    if (start == -1 || end == -1 || start > end)
    {
        cout << "Bob" << nl;
        return;
    }

    int len = end - start + 1;

    cout << "Alice" << nl;
    cout << len << nl;
    for (int j = start; j <= end; j++)
    {
        cout << (j + 1) << (j == end ? nl : " ");
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}