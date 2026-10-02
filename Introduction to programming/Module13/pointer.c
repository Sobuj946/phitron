#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int *ptr=&n;
    printf("%p\n",ptr);
    printf("%p\n",&n);
    printf("%p\n",&ptr);
    printf("%d\n",*ptr);


    
    return 0;
}