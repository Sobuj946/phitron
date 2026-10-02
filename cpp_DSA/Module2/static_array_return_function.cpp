#include<bits/stdc++.h>
using namespace std;
int n;
int *fun()
{
    cin>>n;
    int ar[n];//this array is not exist main function so this array is not return static memory will be empty
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 int *f=  fun();
       for(int i=0;i<n;i++)
    {
        cout<<*(f+i)<<" ";
    }
    return 0;
}