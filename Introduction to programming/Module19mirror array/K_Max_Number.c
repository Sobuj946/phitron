#include<stdio.h>
#include<math.h>
#include<limits.h>
int max(int ar[],int i,int n)
{   
    if(i==n)
    {
        return INT_MIN;
    }
    int mx=max(ar,i+1,n);
   if(mx<ar[i])
   {
    mx=ar[i];
   }
    return mx;
    
}
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int mx=max(ar,0,n);
    printf("%d",mx);
    return 0;
}