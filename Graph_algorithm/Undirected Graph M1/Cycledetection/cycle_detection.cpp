#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool vis[105];
int par[105];
bool cycle;
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        cout<<p<<" ";
        for(auto child:adj_list[p])
        {
            if(vis[child]&&par[p]!=child)
            {
                cycle=true;
            }
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                par[child]=p;
            }
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
    memset(vis,false,sizeof(vis));
    memset(par,-1,sizeof(par));
    cycle=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
             bfs(i);
    }
    if(cycle)
    {
        cout<<"Cycle detection\n";
    }
    else
    {
        cout<<"No cycle detection\n";
    }
    return 0;
}