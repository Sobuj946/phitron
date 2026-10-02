#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max=INT_MIN;
    if((a+b*c)>max)
    {
        max=a+b*c;
    }
    if((a*b*c)>max)
    {
        max=a*b*c;
    }
   if(a*(b+c)>max)
    {
        max=a*(b+c);
    }
   if(((a+b)*c)>max)
    {
        max=(a+b)*c;
    }
    if(a+(b+c)>max)
    {
        max=a+(b+c);
    }
    if(a*b+c>max)
    {
        max=a*b+c;
    }
    printf("%d\n",max);
    return 0;
}