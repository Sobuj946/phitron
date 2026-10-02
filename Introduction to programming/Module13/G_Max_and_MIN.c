#include<stdio.h>
#include<math.h>
#include<limits.h>
void Max_Min(int ar[],int n)
{
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
        else if(min>ar[i])
        {
            min=ar[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    Max_Min(ar,n);
    return 0;
}