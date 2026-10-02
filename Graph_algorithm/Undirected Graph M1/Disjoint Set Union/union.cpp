#include<bits/stdc++.h>
using namespace std;
int parent[104];
int size_group[1005];
int find(int node)//long(n)
{
    if(parent[node]==-1)
    {
        return node;
    }
    cout<<node<<"->";
    int leader=find(parent[node]);
    parent[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int leader1=find(node1);
    int leader2=find(node2);
    if(size_group[leader1]>size_group[leader2])
    {
        parent[leader1]=leader2;
        size_group[leader1]+=size_group[leader2];
    }
    else
    {
        parent[leader2]=leader1;
        size_group[leader2]+=size_group[leader1];

    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(parent,-1,sizeof(parent));
    memset(size_group,1,sizeof(size_group));
    // parent[0]=1;
    // parent[2]=1;
    // parent[3]=1;
    // parent[4]=5;
    // parent[5]=3;
    dsu_union(3,4);
    dsu_union(1,2);
    dsu_union(2,0);

    cout<<find(4)<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<i<<"-> "<<parent[i]<<endl;
    }

    return 0;
}