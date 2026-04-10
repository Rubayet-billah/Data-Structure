#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> ans, has;
    for (int i = 0; i < n; i++)
    {
        string old_name, new_name;
        cin >> old_name >> new_name;
        if (has.find(old_name) != has.end())
        {
            string s = has[old_name];
            ans[s] = new_name;
            has.erase(old_name);
            has[new_name] = s;
        }
        else
        {
            ans[old_name] = new_name;
            has[new_name] = old_name;
        }
    }

    cout << ans.size() << "\n";
    for (auto [x, y] : ans)
    {
        cout << x << " " << y << "\n";
    }

    return 0;
}