#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    int q;
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == q)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;

    return 0;
}