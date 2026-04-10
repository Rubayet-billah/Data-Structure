#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> distances;
    lights.insert(0);
    lights.insert(x);
    distances.insert(x);

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        auto it = lights.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;

        distances.erase(distances.find(right - left));
        distances.insert(p - left);
        distances.insert(right - p);
        lights.insert(p);
        cout << *distances.rbegin() << " ";
    }

    return 0;
}