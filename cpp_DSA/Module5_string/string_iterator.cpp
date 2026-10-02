#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    s="hello world";
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    // s.begin() pointer jeta 1st charater k point korbe 
    //s.end() pointer jeta last er porer charater k point kore
    for(string ::iterator it=s.begin();it<s.end();it++)
    {
        cout<<*(it)<<endl;
    }
    return 0;
}