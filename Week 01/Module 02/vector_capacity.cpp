#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    cout << v.capacity();
    v.size();
    if (v.empty())
        cout << " yes";
    v.clear();
    // using resize we can increase and decrease the size of the vector
    v.resize(2);

    return 0;
}