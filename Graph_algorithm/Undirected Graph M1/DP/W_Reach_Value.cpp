#include<bits/stdc++.h>
using namespace std;
long long int n;
map<long long int,bool>mp;
bool reach(long long int val)
{
    if(n<val)
    return false;
    else if(n==val)
    return true;
    if(mp.count(val))return mp[val];
    else
    {
         mp[val]=(reach(val*10)||reach(val*20));
         return mp[val];
    }
   
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mp.clear();
        if(reach(1))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    
    }
    return 0;
}