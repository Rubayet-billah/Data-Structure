#include <bits/stdc++.h>
using namespace std;
// dsef

int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    if (abs(x - y) <= k)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}