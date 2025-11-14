#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    vector<int> ans;

    while (!dq.empty())
    {
        dq.push_back(dq.front());
        dq.pop_front();
        ans.push_back(dq.front());
        dq.pop_front();
    }

    for (int i : ans)
        cout << i << " ";

    return 0;
}