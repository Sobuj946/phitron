#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int n,i;
    // printf("Enter number n & i th digit extraction\n");
    scanf("%d%d",&n,&i);
    int div=n/pow(10,i);
    int i_digit=div%10;
    printf("The i th digit is :%d \n",i_digit);
    return 0;
}