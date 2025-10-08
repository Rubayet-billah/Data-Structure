#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int restSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        long long int val;
        cin >> val;
        restSum += val;
    }
    long long int sum = n * (n + 1) / 2;
    long long int ans = sum - restSum;
    cout << ans << endl;

    return 0;
}