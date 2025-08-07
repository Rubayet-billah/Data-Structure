#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    v.push_back(x);
    int idx = v.size() - 1;
    int parentIdx = (idx - 1) / 2;
    while (v[idx] > v[parentIdx])
    {
        swap(v[idx], v[parentIdx]);
        idx = parentIdx;
        parentIdx = (idx - 1) / 2;
    }

    for (auto it : v)
    {
        cout << it << ' ';
    }
    return 0;
}