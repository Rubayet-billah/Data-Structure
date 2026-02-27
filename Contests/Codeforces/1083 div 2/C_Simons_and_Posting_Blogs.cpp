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

bool compareBlogs(const vector<int> &a, const vector<int> &b)
{
    int len = min(a.size(), b.size());
    for (int i = 0; i < len; i++)
    {
        if (a[i] != b[i])
            return a[i] < b[i];
    }
    return a.size() > b.size();
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> blogs(n);

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        vector<int> temp(l);
        for (int j = 0; j < l; j++)
            cin >> temp[j];

        // Step 1: Pre-process each blog (Unique Reverse)
        // This simulates the "Move to Front" priority within one blog
        map<int, bool> mp;
        for (int j = l - 1; j >= 0; j--)
        {
            if (!mp[temp[j]])
            {
                blogs[i].push_back(temp[j]);
                mp[temp[j]] = true;
            }
        }
    }

    vector<bool> vis(n, false);
    vector<int> finalQ;

    // Step 2: Dynamic Greedy Selection
    for (int count = 0; count < n; count++)
    {
        int bestIdx = -1;

        // Find the lexicographically smallest remaining blog
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                if (bestIdx == -1 || blogs[i] < blogs[bestIdx])
                {
                    bestIdx = i;
                }
            }
        }

        if (bestIdx == -1)
            break;
        vis[bestIdx] = true;

        // Step 3: Add users from the chosen blog and Erase them from others
        for (int user : blogs[bestIdx])
        {
            finalQ.push_back(user);

            // Crucial: Remove this user from all other unvisited blogs
            // This ensures they don't affect future lexicographical comparisons
            for (int i = 0; i < n; i++)
            {
                if (!vis[i])
                {
                    auto it = find(blogs[i].begin(), blogs[i].end(), user);
                    if (it != blogs[i].end())
                    {
                        blogs[i].erase(it);
                    }
                }
            }
        }
    }

    // Output result
    for (int i = 0; i < finalQ.size(); i++)
    {
        cout << finalQ[i] << (i == (int)finalQ.size() - 1 ? "" : " ");
    }
    cout << nl;
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