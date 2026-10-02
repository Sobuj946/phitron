#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool vis[105];
bool cycle;
bool pathvis[105];
void dfs(int source)
{
    vis[source]=true;
    cout<<source<<" ";
    pathvis[source]=true;
    for(auto child:adj_list[source])
    {
        if(vis[child]&&pathvis[child])
            cycle = true;
        if(!vis[child])
        {
            dfs(child);
        }
    }
    pathvis[source]=false;
}
int main(){

    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));
    memset(pathvis,false,sizeof(pathvis));
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(cycle)
    {
        cout<<"Cycle Detection\n";
    }
    else
    {
        cout<<"No Cycle Detection\n";
    }
    
    return 0;
}