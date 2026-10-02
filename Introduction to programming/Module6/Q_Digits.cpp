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
        do
      
        {
             int temp=n%10;
            n/=10;
            cout<<temp<<" ";
        }  while(n!=0);
        cout<<endl;
    }
    return 0;
}