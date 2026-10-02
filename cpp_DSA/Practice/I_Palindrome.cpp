#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    bool flag=true;
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}