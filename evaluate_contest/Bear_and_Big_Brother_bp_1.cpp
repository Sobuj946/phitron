#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    solve();
    return 0;
}