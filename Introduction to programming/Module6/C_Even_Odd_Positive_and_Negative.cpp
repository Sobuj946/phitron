#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    int even=0,odd=0,posi=0,neg=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>0)
        {
            posi++;
        }
        if(n&1)
        {
            odd++;
        }
        
        if(n<0)
        {
            neg++;
        }
        if(n%2==0)
       {
        even++;
       }
     
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<posi<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}