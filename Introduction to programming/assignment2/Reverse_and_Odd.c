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
    for(int i=n-1;i>=0;i--)
    {
        if(i&1)
        {
            printf("%d ",ar[i]);
        }
    }
    return 0;
}