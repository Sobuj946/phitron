#include <bits/stdc++.h>
using namespace std;
int parent[1005];
int group_size[1005];
int find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = find(parent[node]);
    parent[node]=leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] > group_size[leader2])
    {
        parent[leader1] = leader2;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        parent[leader2] = leader1;
        group_size[leader2] += group_size[leader1];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(parent,-1,sizeof(parent));
    memset(group_size,1,sizeof(group_size));

    bool cycle=false;
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA==leaderB)
        {
            cycle=true;
        }
        else
            dsu_union(a,b);
    }
    if(cycle)
        {
            cout<<"cycle detected\n";
        }
        else{
            cout<<"No cycle\n";
        }
    return 0;
}