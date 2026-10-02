#include<stdio.h>
#include<math.h>
int main(){

    int N;
    scanf("%d",&N);
    int triangel;
    if(N==1)
    {
        triangel=6;
    }
    else
    {
        triangel=5+(N/2+1);
    }
    int space=triangel-1;
    int star=1;
    for(int i=1;i<=triangel;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        space--;
        star+=2;
        printf("\n");
    }
    space=(star-2-N)/2;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=N;j++)
        {
            printf("*");
        }
        printf("\n");
       

    }



    return 0;
}