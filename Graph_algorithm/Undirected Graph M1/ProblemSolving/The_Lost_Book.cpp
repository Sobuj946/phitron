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
    int target;
    cin>>target;
    bool f=false;
    int index;
     for(int i=0;i<n;i++)
    {
       if(ar[i]==target)
       {
            index=i;
            f=true;
            break;
       }
    }
    if(f)
    cout<<index<<endl;
    else
    cout<<-1<<endl;
 
    return 0;
}