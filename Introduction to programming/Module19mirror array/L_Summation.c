#include<stdio.h>
#include<math.h>
long long summation(int ar[],int i,int n)
{
    if(i==n)
    {
        return 0;
    }
    long long sum=ar[i]+summation(ar,i+1,n);
    return sum;
}
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    long long sum=summation(ar,0,n);
    printf("%lld\n",sum);
    return 0;
}