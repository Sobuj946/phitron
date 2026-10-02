#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <limits.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        int sum=0;
        int min=INT_MAX;
        for(int i=1;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                sum=ar[i-1]+ar[j]+j-i+1;
                if(sum<min)
                {
                    min=sum;
                }
            }
        }
        printf("%d\n",min);
    }
    return 0;
}