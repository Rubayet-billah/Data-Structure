#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int currCell;
        int scrCountForX = ceil(float(x) / 15);
        int scrCountFory = ceil(float(y) / 2);
        int scrCount = max(scrCountForX, scrCountFory);
        int singleCells = (15 * scrCount) - (y * 4);
        int availableCell = singleCells - x;
        if (singleCells < x)
        {
            int newScreen = ceil(float(x - singleCells) / 15);
            scrCount += newScreen;
        }
        cout << scrCount << endl;
    }
    return 0;
}