#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<string, string>> leaves;
    for (int i = 0; i < n; i++)
    {
        string name, color;
        cin >> name >> color;
        leaves.insert({name, color});
    }
    cout << leaves.size() << "\n";
    return 0;
}