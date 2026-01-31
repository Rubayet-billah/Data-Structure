#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> primes = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67,
        71, 73, 79, 83, 89, 97};

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());
        long long ans = -1;

        // Step 1: check for primes up to 100
        for (long long p : primes)
        {
            for (long long x : a)
            {
                if (__gcd(x, p) == 1)
                {
                    ans = p;
                    break;
                }
            }
            if (ans != -1)
                break;
        }

        // Step 2: if none found, check array elements themselves
        if (ans == -1)
        {
            for (long long x : a)
            {
                bool ok = false;
                for (long long y : a)
                {
                    if (__gcd(x, y) == 1)
                    {
                        ans = x;
                        ok = true;
                        break;
                    }
                }
                if (ok)
                    break;
            }
        }

        cout << ans << "\n";
    }
}