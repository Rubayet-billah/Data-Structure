#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[105][105];
int level[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        int par_i = q.front().first;
        int par_j = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 'T')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{

        cin >> n;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'S')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'E')
            {
                di = i;
                dj = j;
            }
        }
    }
    bfs(si, sj);
    cout << level[di][dj] << endl;
    // cout << di << " " << dj << endl;

    return 0;
}