#include<stdio.h>
#include<math.h>
int main(){

    int a=10,b=20;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a= %d b= %d",a,b);
    return 0;
}