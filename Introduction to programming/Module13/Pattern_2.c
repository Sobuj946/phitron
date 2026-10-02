#include<stdio.h>
#include<math.h>
void solve(int n)
{
    int space=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        space--;
       
        printf("\n");
    }
}
int main(){

    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}