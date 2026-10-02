#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
bool vis[35][35];
char grid[35][35];
int n;
int level[35][35];
bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= n)
        return false;
    return true;
}
bool flag = false;
int bfs(int si, int sj)
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

            int ci = par_i + v[i].first;
            int cj = par_j + v[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == 'P' || grid[ci][cj] == 'E'))
            {
                if (grid[ci][cj] == 'E')
                {
                    return level[par_i][par_j]+1;
                }
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                
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
    // int n;
    cin >> n;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    // int p=-1;
    int pi, pj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'S')
            {

                pi = i;
                pj = j;
            }
        }
    }
    int p = bfs(pi, pj);
    cout << p << endl;
    return 0;
}