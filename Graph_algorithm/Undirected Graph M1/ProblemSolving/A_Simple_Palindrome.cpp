#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<char>v={'a','e','i','o','u'};
        string ans="";
        int i=0;
        while(n--)
        {
            ans+=v[i];
            i++;
            if(i==5)i=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}