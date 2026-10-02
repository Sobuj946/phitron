#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    char a[10];
    char b[100];
    scanf("%s%s",&a,&b);
    int a_len=strlen(a);
    int b_len=strlen(b);
    for(int i=a_len;i<(a_len+b_len);i++)
    {
       
            a[i]=b[i-a_len];
          
      
    }
  
    printf("%s %s",a,b);
    return 0;
}