#include<bits/stdc++.h>
using namespace std;
int partition(int v[],int l,int r)
{
    int i=l,j=r;
    int pivot=v[l];
    while(i<j)
    {
        while(i<=r&&v[i]<=pivot)
            i++;
        while(j>=l&&v[j]>pivot)
            j--;
        if(i<j)
            swap(v[i],v[j]);
    }
    swap(v[l],v[j]);
    return j;
}
void quick(int v[],int l,int r,int n)
{
    if(l<r)
    {
    int p=partition(v,l,r);
    quick(v,l,p-1,n);
    quick(v,p+1,r,n);
    }

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n=6;
    // cin>>n;
    int v[n]={1,2, 3 ,2, 1, 6};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
   quick(v,0,n-1,n);
   for(auto i:v)
   {
    cout<<i<<" ";
   }
    
    return 0;
}