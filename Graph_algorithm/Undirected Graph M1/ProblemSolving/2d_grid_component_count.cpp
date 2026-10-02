#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int component=0;
    int n,m;
    vector<int>comp;
vector<pair<int,int>>v={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0||i>=n||j<0||j>=m)
        return false;
    return true;
}
void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    component=1;
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        int par_i=p.first;
        int par_j=p.second;
        for(int i=0;i<4;i++)
        {
            int ci=par_i+v[i].first;
            int cj=par_j+v[i].second;
            if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.')
            {
               
              
                q.push({ci,cj});
                vis[ci][cj]=true;
                 component++;

            }
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j]&&grid[i][j]=='.')
               {
                 bfs(i,j);
                   comp.push_back(component);
               }
        }
    }
    for(auto i:comp)
    {
        cout<<i<<" ";
    }
    return 0;
}