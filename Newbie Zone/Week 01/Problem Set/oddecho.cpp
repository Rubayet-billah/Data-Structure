#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i += 2)
    {
        cout << v[i] << endl;
    }

    return 0;
}