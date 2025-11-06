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
        string s;
        cin >> n >> s;
        int safeBirds = 0, totalWolves = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                totalWolves++;
            }
            else if (s[i] == '0' && totalWolves == 0)
            {
                safeBirds++;
            }
        }
        cout << safeBirds << "\n";
    }

    return 0;
}