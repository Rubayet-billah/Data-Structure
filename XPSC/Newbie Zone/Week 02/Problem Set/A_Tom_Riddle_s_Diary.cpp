#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<string> my_set;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (my_set.count(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            my_set.insert(s);
        }
    }

    return 0;
}