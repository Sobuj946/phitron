#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
int dis[1005];
int parent[1005];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    dis[source]=0;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(auto child:adj_list[par])
        {
            if(!vis[child])
            {
                dis[child]=dis[par]+1;
                vis[child]=true;
                parent[child]=par;
                q.push(child);
            }
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    memset(parent,-1,sizeof(parent));
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }
    int dist;
    cin>>dist;
    bfs(1);
    // for(int i=1;i<=n;i++)
    //     cout<<i<<" "<<dis[i]<<endl;
    int node=dist;
    vector<int>v;
    while(node!=-1)
    {
        v.push_back(node);
        node=parent[node];
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}