#include<bits/stdc++.h>
using namespace std;
vector<int>adj_mat[100005];
int strength[100005];
void dfs(int node,int parent,int depth)
{
    strength[node]=2*depth;
    for(int child:adj_mat[node])
    {
        if(child!=parent)
        {
            dfs(child,node,depth+1);
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<pair<int,int>>edges;
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_mat[u].push_back(v);
        // adj_mat[v].push_back(u);

        edges.push_back({u,v});
    }
    int q;
    cin>>q;
    set<pair<int,int>>cut;
    for(int i=0;i<q;i++)
    {
        int u,v;
        cin>>u>>v;
        cut.insert({u,v});
        cut.insert({v,u});
    }
    vector<bool>vis(n+1,false);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            function<void(int,int,int)>dfs_comp=[&](int node,int par,int depth)
            {
                vis[node]=true;
                strength[node]=2*depth;
                for(int child:adj_mat[node])
                {
                    if(!vis[child]!cut.count({node,child}))
                    {
                        dfs_comp(child,node,depth+1);
                    }
                }
            };
            dfs_comp(i,0,0);
        }
        
    }
    for(int i=1;i<=n;i++)
    {
        cout<<strength[i]<<" ";
    }
    return 0;
}