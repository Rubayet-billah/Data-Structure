#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int serejaPoint = 0, dimaPoint = 0;
    bool serejaTurn = true;
    while (!v.empty())
    {
        if (v.front() > v.back())
        {
            if (serejaTurn)
            {
                serejaPoint += v.front();
            }
            else
            {
                dimaPoint += v.front();
            }
            v.pop_front();
        }
        else
        {
            if (serejaTurn)
            {
                serejaPoint += v.back();
            }
            else
            {
                dimaPoint += v.back();
            }
            v.pop_back();
        }
        serejaTurn = !serejaTurn;
    }
    cout << serejaPoint << " " << dimaPoint << endl;
    return 0;
}