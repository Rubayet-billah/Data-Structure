#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> chats;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        chats[s] = i;
    }
    vector<pair<int, string>> order;
    for (auto [x, y] : chats)
    {
        order.push_back({-y, x});
    }
    sort(order.begin(), order.end());

    for (auto [x, y] : order)
    {
        cout << y << "\n";
    }

    return 0;
}