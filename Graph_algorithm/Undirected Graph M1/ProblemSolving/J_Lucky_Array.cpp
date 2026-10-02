#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mn=ar[0];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<mn)
        {
            
            mn=ar[i];
            cnt=1;
            continue;
        }
        if(mn==ar[i])
        {
            cnt++;
        }
    }
//    cout<<cnt<<endl;
     if(cnt%2==1)
    {
        cout<<"Lucky\n";
    }
    else
    {
        cout<<"Unlucky\n";
    }
    return 0;
}