#include <bits/stdc++.h>
using namespace std;
int r, c;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;
    return true;
}

bool m_dfs(int sr, int sc, int dr, int dc)
{
    vis[sr][sc] = true;
    for (int i = 0; i < 4; i++)
    {
        int cr = sr + d[i].first;
        int cc = sc + d[i].second;
        if (cr == dr && cc == dc)
        {
            return true;
        }
        if (valid(cr, cc) && !vis[cr][cc] && grid[cr][cc] != '#')
        {
            if (m_dfs(cr, cc, dr, dc))
                return true;
        }
    }
    return false;
}

int main()
{
    cin >> r >> c;
    int sr = -1, sc = -1, dr = -1, dc = -1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                sr = i;
                sc = j;
            }
            if (grid[i][j] == 'B')
            {
                dr = i;
                dc = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bool can_go = m_dfs(sr, sc, dr, dc);
    cout << (can_go ? "YES" : "NO") << endl;
    return 0;
}