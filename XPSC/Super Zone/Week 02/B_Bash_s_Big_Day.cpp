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
    // sieve();
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> fre;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fre[a[i]]++;
    }

    map<int, int> mp;

    vector<bool> prime(maxN, true);
    for (int p = 2; p <= maxN; p++)
    {
        if (prime[p])
        {
            for (int mul = p; mul <= maxN; mul += p)
            {
                prime[mul] = false;
                if (fre.find(mul) != fre.end())
                {
                    mp[p] += fre[mul];
                }
            }
        }
    }

    int cnt = 1;
    for (auto [x, y] : mp)
    {
        cnt = max(cnt, y);
    }
    cout << cnt << nl;

    return 0;
}