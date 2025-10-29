#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n + m; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}