#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

int checkArrow(int posx, int posy)
{
    if (posx == 0 || posx == 9 || posy == 0 || posy == 9)
        return 1;
    else if (posx == 1 || posx == 8 || posy == 1 || posy == 8)
        return 2;
    else if (posx == 2 || posx == 7 || posy == 2 || posy == 7)
        return 3;
    else if (posx == 3 || posx == 6 || posy == 3 || posy == 6)
        return 4;
    else if (posx == 4 || posx == 5 || posy == 4 || posy == 5)
        return 5;
}

void solve()
{
    int sum = 0;
    char checker;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> checker;
            if (checker == 'X')
            {
                sum += checkArrow(j, i);
            }
        }
    }
    cout << sum << nl;
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}