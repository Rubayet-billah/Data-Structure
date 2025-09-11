#include <bits/stdc++.h>
using namespace std;

bool reachVal(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n % 10 != 0)
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string res = reachVal(n) ? "YES" : "NO";
        cout << res << endl;
    }

    return 0;
}