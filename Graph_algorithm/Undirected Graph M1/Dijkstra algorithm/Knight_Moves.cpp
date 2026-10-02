#include <bits/stdc++.h>
using namespace std;
int grid[105][105];
bool vis[105][105];
int n, m;
int di, dj;
vector<pair<int, int>> p = {{-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}};
int level[105][105];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int bfs(int si, int sj, int di, int dj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj]=0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        if (par_i == di && par_j == dj)
            return level[par_i][par_j];
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + p[i].first;
            int cj = par_j + p[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                level[ci][cj] = level[par_i][par_j] + 1;
                vis[ci][cj] = true;
            }
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        int si, sj;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        cin >> si >> sj;
        cin >> di >> dj;
        int f = bfs(si, sj, di, dj);

        cout << f << endl;
    }
    return 0;
}