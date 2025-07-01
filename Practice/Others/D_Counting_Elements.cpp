#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        // We are checking for v[i] + 1
        bool found_plus_one = false; // Reset flag for each v[i]

        // Inner loop: check ALL elements for v[i] + 1
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] == v[i] + 1)
            {
                found_plus_one = true;
                break; // Found it, no need to check further for this v[i]
            }
        }

        if (found_plus_one)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}