#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // vector<int> v(6);
    // vector<int> v(6, 7);
    // vector<int> v2(v);

    int a[3] = {1, 2, 3};
    vector<int> v(a, a + 3);

    for (int i = 0; i < 6; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}