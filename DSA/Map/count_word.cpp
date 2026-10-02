#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    map<string,int>mp;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        mp[word]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}