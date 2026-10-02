#include<stdio.h>
#include<math.h>
int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("Summation = %d\n",sum);
    int sub=a-b;
    printf("Subtraction = %d\n",sub);
    int mul=a*b;
    printf("Subtraction = %d\n",mul);
    float div=(float)a/b;
    printf("Division = %f\n",div);
    return 0;
}