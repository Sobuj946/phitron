#include<stdio.h>
#include<math.h>
void solve(int a)
{
    for(int i=1;i<a;i++)
    {
        printf("%d ",i);
    }
    printf("%d",a);
}
int main(){

    int a;
    scanf("%d",&a);
    solve(a);
    return 0;
}