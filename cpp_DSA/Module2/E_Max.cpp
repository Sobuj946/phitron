#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,ar[i]);
    }
    cout<<mx<<endl;
    return 0;
}