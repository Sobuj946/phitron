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
    int min=ar[0];
    int max=ar[0];
    int min_index=0;
    int max_index=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            min_index=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            max_index=i;
        }
    }
    int temp=ar[min_index];
    ar[min_index]=ar[max_index];
    ar[max_index]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}