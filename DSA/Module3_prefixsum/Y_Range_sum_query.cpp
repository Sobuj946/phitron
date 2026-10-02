#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,q;
    cin>>n>>q;
    vector<long long>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<long long>prefixsum(n+1);

    for(int i=1;i<=n;i++)
    {
        prefixsum[i]=prefixsum[i-1]+v[i];
    }
    //     for(int i=1;i<=n;i++)
    // {
    //  cout<<prefixsum[i]<<endl;
    // }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long sum=0;
        if(l==1)
        {
            sum=prefixsum[r];
        }
        else
        {
        sum=prefixsum[r]-prefixsum[l-1];
        }
        cout<<sum<<endl;
    }

    return 0;
}