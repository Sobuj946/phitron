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
            printf("%d ",j);
        }
        star++;
        space--;
        printf("\n");

    }
    return 0;
}