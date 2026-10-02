#include<stdio.h>
#include<math.h>
void print(int i)
{
    if(i==6)
    {
        return;
    }
    printf("%d\n",i);
    print(i+1);
}
int main(){

    int i=1;
    print(i);
    return 0;
}