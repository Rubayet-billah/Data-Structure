#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int leftSum = 0;
        int totalSum = 0;
        int prefix_sum[n];
        prefix_sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
        }

        int flag = 0;

        for (int i = 1; i < n; i++)
        {
            leftSum = prefix_sum[i - 1];
            int rightSum = prefix_sum[n - 1] - leftSum - a[i];
            if (leftSum == rightSum)
            {
                flag = i;
                break;
            }
        }
        if (flag)
        {
            cout << flag << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}