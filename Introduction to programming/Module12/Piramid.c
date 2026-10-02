#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int star=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        star=2*i+1;
        printf("\n");

    }
    return 0;
}