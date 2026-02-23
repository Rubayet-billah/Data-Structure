#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"

int countA(int k)
{
    if (k <= 0)
        return 0;
    return (k + 1) / 2;
}

void solve()
{
    int n;
    cin >> n;
    string x;
    cin >> x;

    int cntAinT = countA(n);
    int cntBinT = n - cntAinT;

    int cntAinX = 0, cntBinX = 0, cntQinX = 0;
    for (char c : x)
    {
        if (c == 'a')
            cntAinX++;
        else if (c == 'b')
            cntBinX++;
        else
            cntQinX++;
    }

    if (cntAinX > cntAinT || cntBinX > cntBinT)
    {
        naa return;
    }

    int currA = 0, currQ = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i - 1] == 'a')
            currA++;
        else if (x[i - 1] == '?')
            currQ++;

        int frontA = countA(i);
        int backA = cntAinT - countA(n - i);

        int minA = min(frontA, backA);
        int maxA = max(frontA, backA);

        if (currA > maxA || (currA + currQ) < minA)
        {
            naa return;
        }
    }
    haa
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