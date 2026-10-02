#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int fre[7]={0};
        for(auto c:s)
            fre[c-'A']++;
            int ans=0;
        for(int i=0;i<7;i++)
        {
            if(fre[i]<m)
            {
                ans+=(m-fre[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}