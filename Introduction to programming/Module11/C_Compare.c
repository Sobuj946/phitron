#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){

    char s[21];
    char s1[21];
    scanf("%s%s",s,s1);
    // int i=0;
    // while(1)
    // {
    //     if(s[i]=='\0'&&s1[i]=='\0')
    //     {
    //         printf("%s",s);
    //         break;
    //     }
    //     else if(s[i]=='\0')
    //     {
    //         printf("%s",s);
    //         break;
    //     }
    //     else if(s1[i]=='\0')
    //     {
    //         printf("%s",s1);
    //         break;
    //     }
    //     else if(s1[i]>s[i])
    //     {
    //         printf("%s",s);
    //         break;
    //     }
    //     else if(s1[i]<s[i])
    //     {
    //         printf("%s",s1);
    //         break;
    //     }
    //     else if(s1[i]==s[i])
    //     {
    //        i++;
    //     }
    // }
    if(strcmp(s,s1)>0)
    {
        printf("%s\n",s1);
    }
    else if(strcmp(s,s1)==0)
    {
        printf("%s\n",s1);
    }  
     else 
        printf("%s\n",s);
     
    return 0;
}