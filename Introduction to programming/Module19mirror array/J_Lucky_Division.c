#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool is_lucky(int n)
{
   if(n==0)
   {
    return 0;
   }
   if(n%4==0||n%7==0)
    is_lucky(n/10);

 

   
}
int main(){

    int n;
    scanf("%d",&n);
   bool f= is_lucky(n);
   if(f)
   {
    printf("YES\n");
   }
   else
   {
    printf("NO\n");
   }
    return 0;
}