#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     for(int i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            v[i]=1;
        }
        else if(v[i]==0)
        {
            v[i]=0;
        }
        else
        {
            v[i]=2;
        }
    }
      for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    solve(n);
    return 0;
}