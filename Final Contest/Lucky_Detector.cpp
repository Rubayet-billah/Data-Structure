#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int curr = n;
    while (curr != 0)
    {
        long long int qout = curr % 10;
        if (qout == 7)
        {
            cout << "Lucky\n";
            return 0;
        }
        curr = curr / 10;
    }
    cout << "Not Lucky\n";
    return 0;
}