#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll number)
{
    for (ll i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << 6 << "\n";
            continue;
        }
        pair<int, int> primes;
        pair<bool, bool> primesFound = {false, false};
        ll tmp;
        if (n % 2 == 0)
            tmp = n + 1;
        else
            tmp = n;

        while (true)
        {
            if (isPrime(tmp) && !primesFound.first)
            {
                primes.first = tmp;
                primesFound.first = true;
            }
            else if (isPrime(tmp) && !primesFound.second)
            {
                primes.second = tmp;
                primesFound.second = true;
                break;
            }
            tmp += 2;
        }
        cout << primes.first * primes.second << "\n";
    }

    return 0;
}