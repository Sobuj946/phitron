#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,e;
    cin>>n>>e;
    vector<int>ad_list[n];//array of vector
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        ad_list[a].push_back(b);
        ad_list[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(auto x:ad_list[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}