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

vector<int> boring;

void createBoring()
{
    for (int i = 1; i <= 9; i++)
    {
        int current = 0;

        for (int j = 1; j <= 4; j++)
        {
            current = current * 10 + i;
            boring.push_back(current);
        }
    }
}

int countDigits(int num)
{
    int digits = 0;
    while (num > 0)
    {
        digits++;
        num /= 10;
    }
    return digits;
}

void solve()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int p : boring)
    {

        sum += countDigits(p);

        if (p == n)
        {
            cout << sum << nl;
            return;
        }
    }
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    createBoring();
    while (t--)
        solve();
    return 0;
}