#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    long long mul=1;
    for(int i=a;i<=b;i++)
    {
        mul*=i;
        mul%=c;
    }
    cout<<mul<<endl;
    return 0;
}