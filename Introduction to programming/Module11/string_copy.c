#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    char s[10];
    char b[100];
    scanf("%s%s",&s,&b);
    for(int i=0;i<=strlen(b);i++)
    {
       
            {s[i]=b[i];}
          
      
    }
  
    printf("%s %s",s,b);
    return 0;
}