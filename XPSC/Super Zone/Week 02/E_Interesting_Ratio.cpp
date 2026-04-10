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

const int N = 1e7;
bool isPrime[N + 1];
vector<int> allPrimes;

void sieve()
{
    fill(isPrime, isPrime + N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
            allPrimes.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    ll cnt = 0;
    for (int prime : allPrimes)
    {
        cnt += n / prime;
    }
    cout << cnt << nl;
    // for (int i = 1; i <= n / 2; i++)
    // {
    //     int j = 0;
    //     while (i * allPrimes[j] <= n)
    //     {
    //         cnt++;
    //         j++;
    //     }
    // }
    // cout << cnt << nl;
}

int main()
{
    fast;
    sieve();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}