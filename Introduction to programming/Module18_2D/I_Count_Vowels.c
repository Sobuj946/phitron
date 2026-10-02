#include<stdio.h>
#include<math.h>
#include<string.h>
int solve(char s[],int i)
{
    int n=strlen(s);

    if(i==n)
    {
        return 0;
    }
    int count=0;
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    {
       return  1+solve(s,i+1);
    }
   return solve(s,i+1);
}
int main(){

    char s[201];
   fgets(s, sizeof(s), stdin);
   s[strcspn(s, "\n")] = '\0';
   int count= solve(s,0);
   printf("%d\n",count);
    return 0;
}