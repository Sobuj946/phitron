#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
void dfs(int src)
{
    // cout<<src<<" ";
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

    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int component=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
             component++;
            dfs(i);
            
        }
       
    }
    cout<<component<<endl;
    return 0;
}