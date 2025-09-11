#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int pos;
    cin >> pos;
    v1.insert(v1.begin() + pos, v2.begin(), v2.end());

    for (int i = 0; i < n + m; i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}