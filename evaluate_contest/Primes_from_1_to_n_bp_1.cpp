#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int prime=1;
    for(int i=2;i<=n;i++)
    {
        prime=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}