#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    long long int sum=0,sum1=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum+=ar[i][j];
            }
            if(i==j)
            {
                sum1+=ar[i][j];
            }
        }
    }
    printf("%ld\n",abs(sum-sum1));
    return 0;
}