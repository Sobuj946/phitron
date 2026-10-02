#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    int q;
    cin>>q;
   vector<vector<int>>prefix(s.size()+1,vector<int>(26,0));
    for(int i=0;i<s.size();i++)
    {
       for(int j=0;j<26;j++)
       {
        prefix[i+1][j]=prefix[i][j];
        // cout<<i+1<<" "<<j<<endl;
       }
       prefix[i+1][s[i]-'a']++;
    //    cout<<prefix[i+1][s[i]-'a']<<endl;
       
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<prefix[r][0]-prefix[l-1][0]<<endl;
    }
    return 0;
}