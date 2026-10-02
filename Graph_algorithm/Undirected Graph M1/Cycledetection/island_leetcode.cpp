#include <bits/stdc++.h>
using namespace std;
bool vis[10005][10005];
int n, m;
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int si,int sj)
{
    if(si<0||si>=n||sj<0||sj>=m)
    return false;

    return true;
}
int dfs(vector<vector<int>>v,int starti,int startj)
{
    cout<<starti<<" "<<startj<<endl;
    vis[starti][startj]=true;
    for(int i=0;i<4;i++)
    {
        int si=starti+d[i].first;
        int sj=startj+d[i].second;
        if(valid(si,sj)&&!vis[si][sj])
        {
            dfs(v,si,sj);
        }
    }
}
int island(vector<vector<int>>v)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==1&&!vis[i][j])
            {
            count++;
            dfs(v,i,j);
            }
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            int x;
            cin >> x;
            v[i][j] = x;
        }
    }
    memset(vis,false,sizeof(vis));
    int ilan=island(v);
    cout<<ilan<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}