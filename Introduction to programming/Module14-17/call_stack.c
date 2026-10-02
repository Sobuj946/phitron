#include<stdio.h>
#include<math.h>
void mello()
{
    printf("mello\n");
}
void gello()
{
    printf("gello\n");
    mello();
}
void hello()
{
    printf("hello\n");
    gello();
}
int main(){

    printf("Hi\n");
    hello();
    return 0;
}