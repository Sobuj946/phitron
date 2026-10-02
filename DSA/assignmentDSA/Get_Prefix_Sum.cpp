#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    vector < int > v (n) ;
    for( int i = 1; i <=n;i++)
    {
        cin>>v[i];
    }
    vector<long long>pref(n+1);
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+v[i];
    }
    // sort(pref.begin(),pref.end(),greater<int>());
        for(int i = n; i >=1;i--)
    {
       cout<<pref[i]<<" ";
    }
    return 0;
}