#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int topLines = (n / 2);
    int spaceL = 0;
    int spaceM = n - 2;
    while (topLines--)
    {

        for (int i = 0; i < spaceL; i++)
        {
            cout << " ";
        }
        cout << '\\';
        for (int i = spaceM; i > 0; i--)
        {
            cout << " ";
        }
        cout << '/' << endl;
        spaceL++;
        spaceM -= 2;
    }
    for (int i = 0; i < spaceL; i++)
    {
        cout << " ";
    }
    cout << 'X' << endl;
    spaceL--;    // 2
    spaceM += 2; // 1
    int bottomLines = n / 2;
    while (bottomLines--)
    {
        for (int i = 0; i < spaceL; i++)
        {
            cout << " ";
        }
        cout << '/';
        for (int i = spaceM; i > 0; i--)
        {
            cout << " ";
        }
        cout << '\\' << endl;
        spaceL--;
        spaceM += 2;
    }

    return 0;
}