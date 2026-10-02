#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll,ll>>adj_list[100004];
ll dis[100004];
ll parent[100004];
void dijktra_algorithm(int source)
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    pq.push({0,source});
    dis[source]=0;
    while(!pq.empty())
    {
        pair<ll,ll>q=pq.top();
        pq.pop();
        ll parent_dis=q.first;
        ll parent_node=q.second;
        
        for(auto child:adj_list[parent_node])
        {
       
            ll child_dis=child.first;
            ll child_node=child.second;
            if(child_dis+parent_dis<dis[child_node])
            {
                
                dis[child_node]=child_dis+parent_dis;
                parent[child_node]=parent_node;
                pq.push({dis[child_node],child_node});

            }
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
 
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back({c,b});
        adj_list[b].push_back({c,a});

    }
   for(int i=1;i<=n;i++)
    {
        dis[i]=LLONG_MAX;
        parent[i]=-1;

    }
    dijktra_algorithm(1);
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<dis[i]<<" ";
    // }
    vector<int>v;
    if(dis[n]==LLONG_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        int node=n;
        while(node!=-1)
        {
            v.push_back(node);
           node= parent[node];
        }
        reverse(v.begin(),v.end());
        for(auto i:v)
        { 
            cout<<i<<" ";
        }
    }
    
    return 0;
}