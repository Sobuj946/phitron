#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int star=1;
    for(int i=n;i>=1;i--)
    {
        star=2*i-1;
        for(int j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=star;j>=1;j--)
        {
            printf("*");
        }
       
        printf("\n");

    }
    return 0;
}