#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 3); // (size, val)
    int a[] = {10, 20, 30};
    list<int> l2(a, a + 3);

    l2.resize(6);

    for (int val : l2)
    {
        cout << val << " ";
    }

    return 0;
}