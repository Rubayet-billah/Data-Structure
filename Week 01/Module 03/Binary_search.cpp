#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;

    int l = 0, r = n - 1;
    int flag = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == q)
        {
            flag = 1;
            break;
        }
        else if (a[mid] < q)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (flag == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}