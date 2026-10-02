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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        set<int>s;
        for(auto i:v)
        {
            s.insert(i);
        }
          for(auto i:s)
        {
           cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}