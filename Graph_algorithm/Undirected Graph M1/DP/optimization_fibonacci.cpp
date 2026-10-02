#include<bits/stdc++.h>
using namespace std;
long long int dp[1005];
long long int fibo(int n)
{
    
    if(n<2)
    return n;
    if(dp[n]!=-1)
        return dp[n];
   dp[n]= fibo(n-1)+fibo(n-2);
    return dp[n];
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  memset(dp,-1,sizeof(dp));
    cout<<fibo(n)<<endl;
    
    return 0;
}