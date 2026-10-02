#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    // for(int i=1;i<=n;i*=2)
    // {
    //     cout<<i<<" ";
    // }
     for(int i=n;i>=1;i/=3)
    {
        cout<<i<<" ";
    }
    return 0;
}