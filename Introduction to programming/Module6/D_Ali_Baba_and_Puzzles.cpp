#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b*c==d)
    {
        cout<<"YES\n";
    }
    else if(a*b+c==d)
    {
        cout<<"YES\n";

    }
    else if(a*b-c==d)
    {
        cout<<"YES\n";
    }
    else if(a+b-c==d)
    {
        cout<<"YES\n";
    }
    else if(a-b+c==d)
    {
        cout<<"YES\n";
    }
    else if(a-b*c==d)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}