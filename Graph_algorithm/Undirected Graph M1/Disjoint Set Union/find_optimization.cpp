#include<bits/stdc++.h>
using namespace std;
int parent[104];
int find(int node)
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
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(parent,-1,sizeof(parent));
    parent[0]=1;
    parent[2]=1;
    parent[3]=1;
    parent[4]=5;
    parent[5]=3;
    cout<<find(4)<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<i<<"-> "<<parent[i]<<endl;
    }

    return 0;
}