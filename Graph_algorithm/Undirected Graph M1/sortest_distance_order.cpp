#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
bool vis[1005];
int level[1005];
int v[1005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(auto child:adj[par])
        {
            if(vis[child]==false)
            { 
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
               v[child]=par;
            }
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(v,-1,sizeof(v));
    int src,dest;
    cin>>src>>dest;
    bfs(src);
     vector<int>v1;
    cout<<level[dest]<<endl;
    int node=dest;
   
    while(node!=-1)
    {
        v1.push_back(node);
        node=v[node];
    }
    for(auto i:v1)
    {
        cout<<i<<" ";
    }
  
    return 0;
}