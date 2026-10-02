#include<stdio.h>
#include<math.h>
int main(){

    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("I will take a burger\n");
    }
    else if(tk>=50)
    {
        printf("I will take a fuchka\n");
    }
    else
    {
        printf("I will not take anything\n");
    }
    return 0;
}

