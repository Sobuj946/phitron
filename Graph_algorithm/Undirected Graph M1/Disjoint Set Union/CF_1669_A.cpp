#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int rating;
    cin>>rating;
    if(1900<=rating)
    {
        cout<<"Division 1\n";
    }
    else if(1600<=rating&&rating<=1899)
    {
        cout<<"Division 2\n";
    }
    else if(1400<=rating&&rating<=1599)
    {
        cout<<"Division 3\n";
    }
    else if( rating<=1399)
    {
        cout<<"Division 4\n";
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}