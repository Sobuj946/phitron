#include<stdio.h>
#include<math.h>
int main(){

    char s[100001];
    scanf("%s",s);
    int count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            continue;
        }
        else count++;
    }
    printf("%d\n",count);
    return 0;
}