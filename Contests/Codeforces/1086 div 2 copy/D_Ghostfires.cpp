#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define nl "\n"

void solve()
{
    vector<pair<int, char>> colors(3);
    cin >> colors[0].first >> colors[1].first >> colors[2].first;
    colors[0].second = 'R';
    colors[1].second = 'G';
    colors[2].second = 'B';

    vector<char> ans;
    while (true)
    {
        // 1. Sort to get current maximums
        sort(colors.rbegin(), colors.rend());

        bool found = false;

        // maximum color 0 hoile break korbo
        if (colors[0].first == 0)
            break;

        // initially array empty thakle ekbar push korbo
        if (ans.empty())
        {
            ans.push_back(colors[0].second);
            colors[0].first--;
            found = true;
        }
        else
        {
            // identify the best idx here
            for (int i = 0; i < 3; i++)
            {
                if (colors[i].first > 0)
                {
                    char cur = colors[i].second;
                    int n = ans.size();

                    // The two mandatory rules
                    bool rule1 = (ans.back() != cur);
                    bool rule2 = (n < 3 || ans[n - 3] != cur);

                    if (rule1 && rule2)
                    {
                        // 2. Actually push the character and decrement count
                        ans.push_back(cur);
                        colors[i].first--;
                        found = true;
                        break; // Stop loop once we pick the best valid one
                    }
                }
            }
        }

        if (!found)
            break;
    }

    // 3. Print the final answer once the while loop is finished
    for (char c : ans)
        cout << c;
    cout << "\n";
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