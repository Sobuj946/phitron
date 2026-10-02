#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int star=1;
    int space=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        star++;
        space--;
        printf("\n");
    }
    int star1=n-1;
    int space1=1;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=space1;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star1;j++)
        {
            printf("*");
        }
        printf("\n");
        star1--;
        space1++;
    }
    return 0;
}