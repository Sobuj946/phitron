#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
bool pathvis[1005];
bool cycle;
void dfs(int src)
{
    vis[src]=true;
    pathvis[src]=true;
    cout<<src<<" ";
    for(auto child:adj_list[src])
    {
        if(vis[child]&&pathvis[child])
        {
            cycle=true;
        }
        if(!vis[child])
        {
            dfs(child);
            vis[child]=true;
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    memset(vis,false,sizeof(vis));
    memset(pathvis,false,sizeof(pathvis));

    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            dfs(i);
    }
        
    if(cycle)
    {
        cout<<"cycle detect\n";
    }
    else
    {
        cout<<"no cycle detect\n";
    }

    return 0;
}