#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> parseAdjList(const string &s)
{
    vector<vector<int>> adj;
    int depth = 0;
    string num;

    for (char c : s)
    {
        if (c == '[')
        {
            depth++;
            if (depth == 2)
                adj.emplace_back(); // start of a sublist
        }
        else if (c == ']')
        {
            if (depth == 2 && !num.empty())
            {
                adj.back().push_back(stoi(num));
                num.clear();
            }
            depth--;
        }
        else if (c == ',')
        {
            if (depth == 2 && !num.empty())
            {
                adj.back().push_back(stoi(num));
                num.clear();
            }
        }
        else if (isdigit(c) || c == '-')
        {
            if (depth >= 2)
                num.push_back(c);
        }
    }
    return adj;
}

// Print edges for CSAcademy (include isolated vertices)
void printEdges(const vector<vector<int>> &adj)
{
    for (int u = 0; u < (int)adj.size(); ++u)
    {
        if (adj[u].empty())
        {
            cout << u << "\n"; // isolated node
        }
        else
        {
            for (int v : adj[u])
            {
                cout << u << " " << v << "\n";
            }
        }
    }
}

int main()
{
    string adjListStr;
    cin >> adjListStr;

    auto adj = parseAdjList(adjListStr);

    printEdges(adj);

    return 0;
}
