#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {10, 20, 30, 40, 10, 50, 60, 70};

    l.remove(10); // remove all elements with same value
    l.sort(greater<int>());

    l.unique();

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}