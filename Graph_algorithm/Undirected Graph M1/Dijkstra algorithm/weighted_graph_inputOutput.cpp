#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[105];
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});

    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto p:adj_list[i])
        {
            cout<<p.first<<" "<<p.second<<" ,";
        }
        cout<<endl;
    }
    return 0;
}