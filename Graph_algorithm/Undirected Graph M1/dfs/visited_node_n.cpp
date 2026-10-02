#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
vector<int>v;
void dfs(int src)
{
    v.push_back(src);//or using count varible in the reachable node
    vis[src]=true;
    for(auto child:adj_list[src])
    {
        if(!vis[child])
        {
            dfs(child);
         
        }
        
    }
}

int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int e,n;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int node;
    cin>>node;
     dfs(node);
    cout<<v.size()<<endl;
    for(auto i:v)
        cout<<i<<" ";
    return 0;
}