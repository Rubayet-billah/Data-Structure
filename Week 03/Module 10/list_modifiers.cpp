#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {10, 20, 30, 40, 50, 60, 70};
    vector<int> v = {12, 13, 14};
    // l.push_back(40);
    // l.push_front(23);

    // auto it = next(l.begin(), 3);
    // l.insert(next(l.begin(), 2), 100);
    // l.insert(next(l.begin(), 3), v.begin(), v.end());

    // l.erase(next(l.begin(), 3));
    // l.erase(next(l.begin(), 3), next(l.begin(), 5));

    replace(l.begin(), l.end(), 20, 121);

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}