#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        long long int sum=0;
        for(int i=min(a,b)+1;i<max(a,b);i++)
        {
            if(i&1)
            {
                sum+=i;
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}