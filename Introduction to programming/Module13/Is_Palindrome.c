#include<stdio.h>
#include<math.h>
int is_palindrome(char s[])
{
    int f=1;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            f=0;
            break;
        }
    }
    return f;
} 
int main(){

    char s[1001];
    scanf("%s",s);
    int f=is_palindrome(s) ;
    if(f)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}