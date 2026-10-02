#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
           break;
        }
    }
    if(n<=1)
    {
        printf("Not Prime number\n");

    }
    else if(c==0)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not Prime number\n");

    }
    return 0;
}