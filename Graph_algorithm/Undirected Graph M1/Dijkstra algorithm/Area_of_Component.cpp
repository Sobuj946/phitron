#include <bits/stdc++.h>
using namespace std;
char grid[1003][1003];
bool vis[1003][1003];
int cnt;
int n, m;
int mn = INT_MAX;
vector<pair<int, int>> p = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool flag = false;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{

    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + p[i].first;
        int cj = sj + p[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {

            dfs(ci, cj);
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                cnt = 0;
                flag = true;
                dfs(i, j);
                mn = min(mn, cnt);
            }
        }
    }
    if (flag)
        cout << mn << endl;
    else
        cout << -1 << endl;
    return 0;
}