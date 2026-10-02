#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n,q;
    cin>>n>>q;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        int target;
        cin>>target;
        int i=0,j=n-1;
        bool f=false;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(v[mid]==target)
            {
                f=true;
                break;
            }
            else if(v[mid]>target)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        if(f)
        {
            cout<<"found\n";
        }
        else
        {
            cout<<"not found\n";
        }
    }
    return 0;
}