#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        float q, y;
        cin >> q >> y;
        sum += (q * y);
    }
    cout << fixed << setprecision(3) << sum << endl;

    return 0;
}