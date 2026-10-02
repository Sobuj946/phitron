#include<stdio.h>
#include<math.h>
void pattern(int n)
{
    int star=n;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }

}
int main(){

    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}