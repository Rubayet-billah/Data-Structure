#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Odd operations: a[i] goes to front
    // Even operations: a[i] goes to back
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}