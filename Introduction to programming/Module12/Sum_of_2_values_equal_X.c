#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
  
    int f=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum+=ar[i]+ar[j];
          if(sum==x)
          {
            f=1;
       
          }
        }
    }
    if(f)
    printf("The two value are valid\n");
    else 
    printf("The two value are not valid\n");

    return 0;
}