#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mn=INT_MAX;
    int sum=0;
    // sort(ar,ar+n);
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=ar[i-1]+ar[j]+j-i+1;
          mn=min(mn,sum);
        }
    }
    cout<<mn<<endl;
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