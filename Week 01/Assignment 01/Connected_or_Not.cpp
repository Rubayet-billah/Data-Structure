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
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << "-> ";
    //     for (int val : adj_list[i])
    //         cout << val << " ";
    //     cout << endl;
    // }

    int qry;
    cin >> qry;
    while (qry--)
    {
        int src, dst;
        cin >> src >> dst;
        if (src == dst)
        {
            cout << "YES" << endl;
            continue;
                }
        bool found = false;
        for (int val : adj_list[src])
        {
            if (val == dst)
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}