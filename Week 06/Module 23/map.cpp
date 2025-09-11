#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["football"] = 3;
    cout << mp["football"] << endl;

    if (mp.count("ball"))
    {
        cout << "ache" << endl;
    }
    else
    {
        cout << "nai" << endl;
    }
    return 0;
}