#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<string,int>mp;
    mp["ronjit"]=499;
    mp["roton"]=235;
    mp["kallan"]=404;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //count function check kore oi value ta ace ki na
    if(mp.count("kall"))
    {
        cout<<"ache\n";
    }
    else
    {
        cout<<"nai\n";
    }
    return 0;
}