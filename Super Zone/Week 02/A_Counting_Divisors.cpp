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

const int maxN = 1e6 + 7;
vector<int> divisors(maxN + 1, 0);

int main()
{
    fast;

    for (int i = 1; i <= maxN; i++)
    {
        for (int j = i; j <= maxN; j += i)
        {

            divisors[j]++;
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << divisors[x] << nl;
    }
    return 0;
}