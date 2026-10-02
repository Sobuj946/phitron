#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long int a,b,k;
    cin>>a>>b>>k;
    if(a%k==0&&b%k==0)
    {
        cout<<"Both"<<endl;
    }
    else if(a%k==0&&b%k!=0)
    {
        cout<<"Memo"<<endl;
    }
    else if(b%k==0&&a%k!=0)
    {
        cout<<"Momo"<<endl;
    }
    else
    {
        cout<<"No One\n";
    }
    return 0;
}