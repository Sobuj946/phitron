#include<bits/stdc++.h>
using namespace std;
int parent[1000005];
int group_size[1000005];
int cmp,mx;
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
void dsu(int node1 ,int node2)
{
    int leader1=find(node1);
    int leader2=find(node2);
    if(leader1==leader2)
    return;
    if(group_size[leader1]>group_size[leader2])
    {
        parent[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
        mx=max(group_size[leader1],mx);
    }
    else
    {
        parent[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];
        mx=max(mx,group_size[leader2]);

    }
    cmp--;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,e;
    cin>>n>>e;
    cmp=n;
    mx=1;
    for(int i=1;i<=n;i++)
    {
        group_size[i]=1;
        parent[i]=-1;
    }
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leader1=find(a);
        int leader2=find(b);
        
        dsu(a,b);
        cout<<cmp<<" "<<mx<<endl;
    }
   
    
    return 0;
}