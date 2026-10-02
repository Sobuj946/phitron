#include<stdio.h>
#include<math.h>
int main(){

    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("I will go to cox's bazer\n");
        if(tk>=10000)
        {
            printf("I will go to sentmartin\n");
        }
        else 
        {
            printf("I will come back to home\n");
        }
    }
    else
    {
        printf("I will not go to travel\n");
    }
    return 0;
}