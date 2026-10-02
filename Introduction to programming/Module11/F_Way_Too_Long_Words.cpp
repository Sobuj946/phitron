#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; 
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        if(len>10)
        {
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}