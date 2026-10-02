#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    // for(int i=0;i<s.size();i++)//when we do the work for index
    // {
    //     cout<<s[i]<<endl;
    // }
    
    for(char c:s)//when not using index
    {
        cout<<c<<endl;
    }
    return 0;
}