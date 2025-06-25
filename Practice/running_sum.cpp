#include <bits/stdc++.h>
using namespace std;

vector<int> sum_func(vector<int> vs, int n)
{
    vector<int> temp(n);
    temp[0] = vs[0];
    for (int i = 0; i < n - 1; i++)
    {
        temp[i + 1] = vs[i + 1] + temp[i];
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> sum_arr = sum_func(v, n);

    for (int i = 0; i < n; i++)
    {
        cout << sum_arr[i] << " ";
    }

    return 0;
}