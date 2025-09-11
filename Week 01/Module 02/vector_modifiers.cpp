#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 4};
    // v.insert(v.begin() + 2, 100);
    // v.insert(v.begin() + 2, v.begin(), v.end());
    // v.erase(v.begin() + 1, v.begin() + 5);

    // replace(v.begin(), v.end(), 2, 100);

    // auto it = find(v.begin(), v.end(), 3);

    // if (it == v.end())
    //     cout << "Not found";
    // else
    //     cout << "Found";

    // for (int val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << v.back();

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}