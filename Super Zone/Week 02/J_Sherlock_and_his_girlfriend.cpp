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

// 1. Use a global constant for the limit.
// 1e7 is the standard memory limit for a boolean array in most CP platforms.
const int maxN = 1e5 + 7;

// 2. Declare large arrays GLOBALLY.
// Local variables go to the 'Stack' (small memory), Globals go to 'Data Segment' (large memory).
bool prime[maxN + 1];
vector<int> allPrimes;

void sieve()
{
    // Step 1: Initialize the sieve.
    // Assume every number is prime (true) initially.
    fill(prime, prime + maxN + 1, true);

    // Step 2: Handle edge cases.
    // 0 and 1 are mathematically not prime numbers.
    prime[0] = prime[1] = false;

    // Step 3: Start filtering from the first prime, 2.
    // We only need to go up to sqrt(maxN) because if a number 'n' is composite,
    // its smallest prime factor must be <= sqrt(n).
    for (int i = 2; i * i <= maxN; i++)
    {
        // If 'i' is still true, it hasn't been crossed out by a smaller prime.
        // Therefore, 'i' IS a prime.
        if (prime[i])
        {
            // Step 4: "Cross out" all multiples of this prime.
            // We start from i*i because multiples smaller than i*i (like i*2, i*3)
            // have already been crossed out by smaller primes (2, 3).
            for (int j = i * i; j <= maxN; j += i)
            {
                prime[j] = false; // Mark as composite
            }
        }
    }

    // Step 5: Collect all indices that remained 'true'.
    // These are your prime numbers.
    for (int i = 2; i <= maxN; i++)
    {
        if (prime[i])
        {
            allPrimes.push_back(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << 1 << nl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        endl;
        return;
    }
    cout << 2 << nl;
    for (int i = 2; i <= n + 1; i++)
    {
        cout << (prime[i] ? 1 : 2) << " ";
    }
    endl;
}

int main()
{
    fast;
    sieve();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}