#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    while(m--)
    {
    int l,r;
    cin>>l>>r;
    int sum=0;
    for(int i=l-1;i<r;i++)
    {
        sum+=ar[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}