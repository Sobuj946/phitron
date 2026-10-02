#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    getline(cin,s);
    string t="Jessica";
   stringstream ss(s);
   string word;
   bool f=false;
   while(ss>>word)
   {
    if(word==t)
    {
        f=true;
    }
   }
   if(f)
   {
    cout<<"YES\n";
   }
   else
   {
    cout<<"NO\n";
   }
    return 0;
}