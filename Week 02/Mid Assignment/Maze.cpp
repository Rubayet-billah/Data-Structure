#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> par[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
bool found;

void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    par[si][sj] = {-1, -1};
    while (!q.empty())
    {
        int par_i = q.front().first;
        int par_j = q.front().second;
        q.pop();
        if (par_i == di && par_j == dj)
        {
            found = true;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                par[ci][cj] = {par_i, par_j};
                // level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{

    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    found = false;
    bfs(si, sj, di, dj);

    if (found)
    {
        int i = di, j = dj;
        while (!(i == si && j == sj))
        {
            if (grid[i][j] == '.')
                grid[i][j] = 'X';
            int x = par[i][j].first;
            int y = par[i][j].second;
            if (x == -1 && y == -1)
                break;
            i = x;
            j = y;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}