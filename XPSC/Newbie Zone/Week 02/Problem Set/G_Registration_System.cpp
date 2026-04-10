#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (mp.find(name) == mp.end())
        {
            mp[name] = 0;
            cout << "OK\n";
        }
        else
        {
            mp[name]++;
            string new_name = name + to_string(mp[name]);
            cout << new_name << "\n";
            mp[new_name] = 0;
        }
    }

    return 0;
}