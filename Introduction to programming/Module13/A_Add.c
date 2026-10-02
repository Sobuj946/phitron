#include<stdio.h>
#include<math.h>
void summation(int a,int b)
{
    printf("%d\n",a+b);
}
int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    summation(a,b);
    return 0;
}