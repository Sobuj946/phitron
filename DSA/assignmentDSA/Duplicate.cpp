#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bool flag=false;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
           
        }
        else
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}