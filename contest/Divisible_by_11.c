#include<stdio.h>
#include<math.h>
int main(){

   char s[101];
    scanf("%s",&s);
    int len=strlen(s);
    int even=0,odd=0;

    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            even+=s[i]-'0';
        }
   
    }
        for(int i=len-1;i>=0;i--)
    {
        if(i%2==1)
        {
            odd+=s[i]-'0';
        }
   
    }
    int n=even-odd;
    if(n%11==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}