#include<bits/stdc++.h>
using namespace std;
   const int mxsum=200000;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<int>cost(n);
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    bitset<mxsum+1>dp;
    dp[0]=1;
    for(auto p:cost)
    {
        dp|=(dp<<p);
    }
    vector<int>prefix(mxsum+1,0);
    for(int i=1;i<=mxsum;i++)
    {
        prefix[i]=prefix[i-1]+dp[i];
    }
    int q;
    cin>>q;
    while(  q--)
    {
        int l,r;
        cin>>l>>r;
        if(l>mxsum){
            cout<<0<<endl;
        }
        if(r>mxsum)r=mxsum;
        int ans=prefix[r]-(l>0?prefix[l-1]:0);
        cout<<ans<<endl;

    }

    return 0;
}