#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long int n;
    cin>>n;
    long long int fibo[100005];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cout<<fibo[n]<<endl;
    return 0;
}