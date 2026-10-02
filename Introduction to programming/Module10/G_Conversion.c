#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include<math.h>
int main(){

    char s[100001];
    // fgets(s,100001,stdin);
    // s[strcspn(s, "\n")] = '\0';
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            printf("%c",toupper(s[i]));
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            printf("%c",tolower(s[i]));
        }
        else 
        {
            printf(" ");
        }
       
    }
    printf("\n");
    return 0;
}