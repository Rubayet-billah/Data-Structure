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

const int maxN = 3001;
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
    vector<int> a(3001, 0);
    for (int i = 2; i <= 3001; i++)
    {
        for (int p : allPrimes)
        {
            if (p > i)
                break;
            if (i % p == 0)
                a[i]++;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 2)
            cnt++;
    }
    cout << cnt << nl;

    return 0;
}