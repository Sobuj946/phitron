#include<bits/stdc++.h>
using namespace std;
int parent[1000005];
int group[1000005];
int find(int node)
{
    if(parent[node]==-1)
    {
        return node;
    }
    int leader=find(parent[node]);
    parent[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int leaderA=find(node1);
    int leaderB=find(node2);
    if(group[leaderA]>group[leaderB])
    {
        parent[leaderA]=leaderB;
        group[leaderA]+=group[leaderB];
    }
    else
    {
       parent[leaderB]=leaderA;
       group[leaderB]+=group[leaderA]; 
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    memset(parent,-1,sizeof(parent));
    memset(group,1,sizeof(group));
    bool cycle=false;
    int cnt=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA==leaderB)
        {
            cnt++;
            cycle=true;
        }
        else
        {
            dsu_union(leaderA,leaderB);
        }
    }
    cout<<cnt<<endl;
    return 0;
}