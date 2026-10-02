#include<bits/stdc++.h>
using namespace std;
long long prefix(long long val)
{
    if(val==0)
    {
        return 0;
    }
    if(val%2==0)
    {
        long long k=val/2;
        return k*(k+1);
    }
    else
    {
        long long k=val/2;  
        return k*(k+1)+(k+1);
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n,q;
    cin>>n>>q;
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<prefix(r)-prefix(l-1)<<"\n";
    }
    return 0;
}