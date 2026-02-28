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

void solve()
{
    int n, x, y;
    if (!(cin >> n >> x >> y))
        return;

    deque<int> prefix, middle, suffix;

    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;
        if (i <= x)
            prefix.push_back(val);
        else if (i <= y)
            middle.push_back(val);
        else
            suffix.push_back(val);
    }

    if (middle.empty())
    {
        for (int v : prefix)
            cout << v << " ";
        for (int v : suffix)
            cout << v << " ";
        cout << "\n";
        return;
    }

    int minMiddle = middle[0];
    for (int i : middle)
        minMiddle = min(minMiddle, i);

    while (middle.front() != minMiddle)
    {
        int temp = middle.back();
        middle.pop_back();
        middle.push_front(temp);
    }

    int firstLargeIdx = -1;
    for (int i = 0; i < (int)prefix.size(); i++)
    {
        if (prefix[i] > minMiddle)
        {
            firstLargeIdx = i;
            break;
        }
    }

    bool PrefOp = false;
    if (firstLargeIdx != -1)
    {
        PrefOp = true;
        int elementsToMove = (int)prefix.size() - firstLargeIdx;
        for (int i = 0; i < elementsToMove; i++)
        {
            int val = prefix.back();
            prefix.pop_back();
            suffix.push_front(val);
        }
    }

    if (!PrefOp && !suffix.empty())
    {
        while (!suffix.empty() && suffix.front() < minMiddle)
        {
            int val = suffix.front();
            suffix.pop_front();
            prefix.push_back(val);
        }
    }

    bool first = true;
    auto print_dq = [&](deque<int> &dq)
    {
        for (int v : dq)
        {
            if (!first)
                cout << " ";
            cout << v;
            first = false;
        }
    };

    print_dq(prefix);
    print_dq(middle);
    print_dq(suffix);
    endl
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