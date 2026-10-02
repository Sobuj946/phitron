#include<stdio.h>
#include<math.h>
void print(int n)
{
    if(n==0)
    {
        return;//condition
    }
   
    print(n-1);//increment/decrement
    printf("%d\n",n);

}
int main(){

    int n;
    scanf("%d",&n);
    print(n);//initialization
    return 0;
}