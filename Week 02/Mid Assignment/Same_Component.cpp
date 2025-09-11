#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
bool found;

void dfs(int si, int sj, int di, int dj)
{
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    if (si == di && sj == dj)
    {
        found = true;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        // cout << ci << " " << cj << endl;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {

            dfs(ci, cj, di, dj);
        }
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    found = false;
    dfs(si, sj, di, dj);
    if (found)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}