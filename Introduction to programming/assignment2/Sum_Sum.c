#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    long long sum_positive=0;
    long long sum_negative=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            sum_positive+=ar[i];
        }
        else
        {
            sum_negative+=ar[i];
        }
    }
    printf("%lld %lld\n",sum_positive,sum_negative);
    return 0;
}