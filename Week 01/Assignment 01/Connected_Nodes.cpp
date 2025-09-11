#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    // int arr[n];
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int qry;
    cin >> qry;
    while (qry--)
    {
        int src;
        cin >> src;
        vector<int> childs = adj_list[src];
        if (childs.empty())
        {
            cout << -1 << endl;
            continue;
        }
        sort(childs.begin(), childs.end(), greater<int>());
        for (int val : childs)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}