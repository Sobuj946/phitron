#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){

    char ch[1000001];
   fgets(ch,1000001,stdin);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='\\')
        {
            break;
        }
        else printf("%c",ch[i]);
    }
    return 0;
}