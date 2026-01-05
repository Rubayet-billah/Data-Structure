#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        map<int, int> mp;
        set<int> s;
        int dupCnt = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (s.count(val))
            {

                dupCnt++;
                s.clear();
            }
            s.insert(val);
        }
        cout << dupCnt << "\n";
    }

    return 0;
}