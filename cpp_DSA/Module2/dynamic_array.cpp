#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    //int ar[5];//static array
    int *ar=new int[5];//dynamic array
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }
      for(int i=0;i<5;i++)
    {
       cout<<ar[i]<<" ";
    }
    return 0;
}