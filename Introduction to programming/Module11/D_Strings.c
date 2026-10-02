#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    char s[11];
    char s1[11];
    char scp[11];
    char s1cp[11];
  
    scanf("%s%s",s,s1);
    strcpy(scp,s);
    strcpy(s1cp,s1);
    int s_len=strlen(s);
    int s1_len=strlen(s1);
    printf("%d %d\n",s_len,s1_len);
    for(int i=s_len;i<=s_len+s1_len;i++)
    {
        s[i]=s1[i-s_len];
    }
    printf("%s\n",s);
    char temp=scp[0];
    scp[0]=s1cp[0];
    s1cp[0]=temp;
    printf("%s %s",scp,s1cp);

    return 0;
}