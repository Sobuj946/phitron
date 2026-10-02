#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n, m;
int level[1005][1005];
vector<pair<int, int>> p = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}

pair<int, int> parent[1005][1005];

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    parent[si][sj] = {-1, -1};

    pair<int, int> dest = {-1, -1};

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        if (grid[par_i][par_j] == 'D')
        {
            dest = {par_i, par_j};
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + p[i].first;
            int cj = par_j + p[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }

    if (dest.first != -1)
    {
        pair<int, int> cur = dest;
        while (parent[cur.first][cur.second] != make_pair(-1, -1))
        {
            if (grid[cur.first][cur.second] == '.')
                grid[cur.first][cur.second] = 'X';
            cur = parent[cur.first][cur.second];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'R')
            {
                bfs(i, j);
            }
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