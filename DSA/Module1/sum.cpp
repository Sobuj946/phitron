#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int sum=0;
    // for(int i=1;i<=n;i++)//O(n)
    // {
    //     sum+=i;
    // }
    // cout<<sum<<endl;
    cout<<(n*(n+1))/2<<endl;//O(1)
    return 0;
}