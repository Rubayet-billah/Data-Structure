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

int roomCntdfs(int si, int sj)
{
    vis[si][sj] = true;
    int cnt = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            cnt += roomCntdfs(ci, cj);
        }
    }
    return cnt;
}

int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    vector<int> rooms;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                int cnt = roomCntdfs(i, j);
                rooms.push_back(cnt);
            }
        }
    }
    if (rooms.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(rooms.begin(), rooms.end());
        for (int i = 0; i < rooms.size(); i++)
        {
            cout << rooms[i] << " ";
        }
    }

    return 0;
}