/*Question: Take an integer array A of size N as input.
 Then take an integer M as input. You need to take an 
 array B of size M and copy all elements of array A to 
 array B. Delete the array A and then take input of the
rest of the elements of array B. After that print array B*/
#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int *b=new int[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int *c=new int[n+m];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
      for(int i=n;i<m;i++)
    {
        c[i]=b[i];
    }
      for(int i=0;i<n+m;i++)
    {
       cout<<c[i]<<" ";
    }
    return 0;
}