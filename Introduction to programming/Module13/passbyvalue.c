#include<stdio.h>
#include<math.h>
void fun(int n)
{
    n=20;
    printf("function :%d\n",n);
    printf("Funtion: %p\n",&n);
}
int main(){

    int n;
    scanf("%d",&n);
    printf("Main function:%d\n",n);
    printf("main function adress:%p\n",&n);
    fun(n);
    printf("Main function:%d\n",n);
    return 0;
}