#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
vector<int>acending;
    int component=0;

void dfs(int src)
{
    vis[src]=true;
    component++;
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
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            component=0;
            dfs(i);
            acending.push_back(component);
        }
    }
    sort(acending.rbegin(),acending.rend());
    for(auto i:acending)
    {
        cout<<i<<" ";
    }

    return 0;
}