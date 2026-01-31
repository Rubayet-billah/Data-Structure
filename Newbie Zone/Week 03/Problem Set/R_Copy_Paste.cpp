#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        while (n--)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        cout << s.size() << "\n";
    }

    return 0;
}