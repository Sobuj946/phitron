#include<stdio.h>
#include<math.h>
void pattern(int n)
{
    int star=1;
    int space=n-1;
    for(int i=1;i<=n;i++)
    {
        
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        star+=2;
        space--;
        printf("\n");
    }
    

}
int main(){

    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}