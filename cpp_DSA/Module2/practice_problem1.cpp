/*Question: At first in the main function take
 an integer N as input. Then make a function named 
 get_array() which will receive that N as a parameter. 
 Then inside the get_array() function create an integer
  array of size N. Then the values of that array will be 
  taken as input. After that return that array from that 
  function and receive it in the main function and print
   the values of the array there.
*/
#include<bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *ar=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int *a=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}