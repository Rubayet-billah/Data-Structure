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

const int maxN = 1e5 + 7;
vector<int> allPrimes;

void sieve()
{
    vector<bool> prime(maxN, true);
    for (int i = 2; i * i <= maxN; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= maxN; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= maxN; i++)
    {
        if (prime[i])
        {
            allPrimes.push_back(i);
        }
    }
}

int main()
{
    fast;
    sieve();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << 1
    };

    map<int, int> mp;
    for (int prime = 0; prime < allPrimes.size(); prime++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % allPrimes[prime] == 0)
            {
                mp[allPrimes[prime]]++;
            }
        }
    }

    int cnt = 0;
    for (auto [x, y] : mp)
    {
        cnt = max(cnt, y);
    }
    cout << cnt << nl;

    return 0;
}