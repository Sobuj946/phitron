#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    long long sum=0;
    for(int i=0;i<k;i++)
    {
        if(ar[i]>0)
        {
            sum+=ar[i];
        }
        else
        break;
    }
    cout<<sum<<endl;
    return 0;
}