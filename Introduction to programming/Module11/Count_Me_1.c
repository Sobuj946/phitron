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
    int count2=0,count3=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            count2++;
        }
        else if(ar[i]%3==0)
        {
            count3++;
        }
    }
    printf("%d %d\n",count2,count3);
    return 0;
}