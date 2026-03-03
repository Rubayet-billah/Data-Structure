#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "YES\n";
#define naa cout << "NO\n";
#define endl cout << "\n";
#define nl "\n"
int n;
int g[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {
    {-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

bool valid(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > n)
        return false;
    return true;
}

bool ans = false;

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        int par_i = q.front().first;
        int par_j = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first, cj = par_j + d[i].second;
            if (valid(ci, cj) && g[ci][cj] != 1 && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                if (g[ci][cj] == 3)
                {
                    ans = true;
                    return;
                }
            }
        }
    }
}

void make_path(int x, int y)
{
    int p = x, q = y;
    while (p <= n && q <= n)
    {
        g[p][q] = 1;
        p++, q++;
    }
    p = x, q = y;
    while (p >= 1 && q >= 1)
    {
        g[p][q] = 1;
        p--, q--;
    }
    p = x, q = y;
    while (p <= n && q >= 1)
    {
        g[p][q] = 1;
        p++, q--;
    }
    p = x, q = y;
    while (p >= 1 && q <= n)
    {
        g[p][q] = 1;
        p--, q++;
    }
}

void solve()
{
    cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == ax || j == ay)
                g[i][j] = 1;
            else
                g[i][j] = 0;
        }

    g[bx][by] = 2;
    g[cx][cy] = 3;
    make_path(ax, ay);
    bfs(bx, by);

    if (ans)
        haa else naa
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << g[i][j] << " ";
    //     }
    //     endl;
    // }
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}