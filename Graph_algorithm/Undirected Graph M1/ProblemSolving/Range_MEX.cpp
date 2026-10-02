#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,q;
    cin>>n>>q;
    vector<int>prefix0(n+1,0),prefix1(n+1,0),prefix2(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        prefix0[i]=prefix0[i-1]+(x==0);
        prefix1[i]=prefix1[i-1]+(x==1);
        prefix2[i]=prefix2[i-1]+(x==2);

    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(prefix0[r]-prefix0[l-1]==0)
        {
            cout<<0<<"\n";
        }
        else if(prefix1[r]-prefix1[l-1]==0)
        {
            cout<<1<<"\n";
        }
         else if(prefix2[r]-prefix2[l-1]==0)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<3<<"\n";
        }
    }
    return 0;
}