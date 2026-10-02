#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int ar[n];
        bool f=false;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);

        int sum=0;
        for(int i=0;i<n-2;i++)
        {
        int j=i+1,k=n-1;
        
        while(j<k)
        {
            sum=ar[i]+ar[j]+ar[k];
            // cout<<sum<<endl;
            if(s==sum)
            {
                f=true;
                break;
            }
            else if(sum>s)
            {
                k--;
            }
            else
            {
                j++;
            }
          
        }
    }
        if(f)cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}