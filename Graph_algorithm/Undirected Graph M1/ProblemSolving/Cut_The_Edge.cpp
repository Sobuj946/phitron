#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<vector<int>>child(n+1);
    vector<int>parent(n+1,0);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;

        child[u].push_back(v);
        // child[v].push_back(u);

        parent[v]=u;
    }
    int q;
    cin>>q;
    set<pair<int,int>>cut;
    for(int i=0;i<q;i++)
    {
        int u,v;
        cin>>u>>v;
        if(parent[v]==u)
            cut.insert({u,v});
        else if(parent[u]==v)
            cut.insert({v,u});

    }
    vector<int>depth(n+1,-1);
    queue<int>qq;
    qq.push(1);
    depth[1]=0;
    while(!qq.empty())
    {
        int u=qq.front();
        qq.pop();
        for(int v:child[u])
        {
            depth[v]=depth[u]+1;
            qq.push(v);
        }
    }
    vector<int>root(n+1);
    root[1]=1;
    qq.push(1);
    while(!qq.empty())
    {
        int u=qq.front();
        qq.pop();
        for(int v:child[u])
        {
            if(cut.find({u,v})!=cut.end())
            {
                root[v]=v;
            }
            else
            {
                root[v]=root[u];
            }
            qq.push(v);
        }
        
    }
    for(int i=1;i<=n;i++)
    {
        int d=depth[i]-depth[root[i]];
        cout<<2*d<<" ";
    }
    return 0;
}