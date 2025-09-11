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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        vector<int> cpy = v;
        sort(cpy.begin(), cpy.end(), greater<int>());
        int firstHeight = cpy[0], secondheight = cpy[1];
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == firstHeight || v[i] == secondheight)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}