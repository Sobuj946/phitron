#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    int mx=max({a,b,c});
    int mn=min({a,b,c});
    cout<<mn<<" "<<mx<<endl;
    return 0;
}