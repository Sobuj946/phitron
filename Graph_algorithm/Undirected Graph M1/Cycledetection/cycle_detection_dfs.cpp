#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
int parent[105];
bool vis[105];
bool cylce;
void dfs(int source)
{
    vis[source]=true;
    for(auto child:adj_list[source])
    {
        if(vis[child]&&parent[source]!=child)
             cylce=true;
        if(!vis[child])
        {
            parent[child]=source;
            dfs(child);
            
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    cylce=false;
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(cylce)
    {
        cout<<"Cycle Detection \n";
    }
    else
    {
        cout<<"No Cycle Detection\n";
    }
    return 0;
}