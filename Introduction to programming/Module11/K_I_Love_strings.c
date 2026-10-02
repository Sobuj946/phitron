#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[51],t[51];
        scanf("%s %s",&s,&t);
        int i=0,j=0;
        int s_len=strlen(s);
        int t_len=strlen(t);
        while(i<s_len&&j<t_len)
        {
            printf("%c%c",s[i],t[j]);
            i++;
            j++;
        }
        while(i<s_len)
        {
            printf("%c",s[i]);
            i++;
        }
        while(j<t_len)
        {
            printf("%c",t[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}