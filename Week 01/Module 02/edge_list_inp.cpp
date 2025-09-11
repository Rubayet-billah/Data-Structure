#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge_list;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
    }

    for (auto pr : edge_list)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}