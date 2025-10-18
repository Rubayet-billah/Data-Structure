#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int min_cost = min({a, b, c});
    cout << min_cost << "\n";
    return 0;
}