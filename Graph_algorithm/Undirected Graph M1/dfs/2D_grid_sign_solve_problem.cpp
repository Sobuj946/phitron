#include <bits/stdc++.h>
using namespace std;
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
char grid[1005][1005];
int n, m;
bool valid(int si, int sj)
{
    if (si < 0 || si >= n || sj < 0 || sj >= m)
    {
        return false;
    }
  
        return true;
}
void dfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        // cout<<par_i<<" "<<par_j<<endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]&&grid[ci][cj]=='.')
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    dfs(si, sj);
    cout << level[di][dj] << endl;

    return 0;
}